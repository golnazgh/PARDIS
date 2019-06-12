
#include "antlr-plugins.h"
#include "reducers.h"
#include "TestCaseShrinker.h"
#include "HierarchicalTestCaseShrinker.h"

#include <llvm/ADT/DenseSet.h>
#include <llvm/ADT/SmallPtrSet.h>
#include <llvm/ADT/StringSet.h>
#include <llvm/Support/CommandLine.h>
#include <llvm/Support/FileSystem.h>
#include <llvm/Support/Program.h>
#include <llvm/Support/Timer.h>
#include <llvm/Support/ToolOutputFile.h>

#include <mutex>
#include <queue>

using namespace llvm;
using antlr4::Token;


// Including command line options here is ugly, but we only want them so that
// we can collect stats comparing the different splitting strategies when all
// other variables are held constant.

extern cl::OptionCategory reducerCategory;
extern cl::opt<ReducerMode> reducerMode;

struct IntWrapper {
  int value;
};

class DefaultIntParser : public llvm::cl::parser<IntWrapper> {
public:
  DefaultIntParser(llvm::cl::Option& o)
    : llvm::cl::parser<IntWrapper>{o}
      { }

  bool
  parse(llvm::cl::Option &o,
        llvm::StringRef argName,
        llvm::StringRef arg,
        IntWrapper &value) {
    if (arg == "") {
      value.value = 0;
    } else if (arg.getAsInteger(0, value.value)) {
      return o.error("'" + arg + "' value invalid for integer argument!");
    }
    return false;
  }
};

static cl::opt<uint32_t> timeoutOpt {"timeout",
  cl::desc{"Number of seconds to run the reducer. (default infinite)"},
  cl::cat{reducerCategory},
  cl::init(0)};

static cl::opt<bool> nullabilityInferenceOpt {"nullability-inference",
  cl::desc{"Enables inference of more nullable nodes which could yield larger search space"},
  cl::cat{reducerCategory},
  cl::init(true)};

static cl::opt<bool> nullabilityPruningOpt {"nullability-pruning",
  cl::desc{"Prunes the search space by tagging only the first nullable node in a chain as nullable"},
  cl::cat{reducerCategory},
  cl::init(true)};


enum class SplitMode {
  HALF,
};

static cl::opt<SplitMode> splitMode{
  cl::desc{"Select the splitting approach"},
  cl::values(
    clEnumValN(SplitMode::HALF, "half",
      "split partitions in half")
  ),
  cl::cat{reducerCategory},
  cl::init(SplitMode::HALF)};


enum class Ordering {
  SEQUENTIAL_FF,
  SEQUENTIAL_FR,
  SEQUENTIAL_RF,
  SEQUENTIAL_RR,
  LINEAGE
};

static cl::opt<Ordering> orderMode {
  cl::desc{"Select the order to consider subsets and complements"},
  cl::values(
    clEnumValN(Ordering::SEQUENTIAL_FF, "seq-ff",
      "subsets forward, complements forward"),
    clEnumValN(Ordering::SEQUENTIAL_FR, "seq-fr",
      "subsets forward, complements reversed"),
    clEnumValN(Ordering::SEQUENTIAL_RF, "seq-rf",
      "subsets reversed, complements forward"),
    clEnumValN(Ordering::SEQUENTIAL_RR, "seq-rr",
      "subsets reversed, complements reversed"),
    clEnumValN(Ordering::SEQUENTIAL_FR, "dependence",
      "an alias of seq-fr, this tried to reduce breaking dependences"),
    clEnumValN(Ordering::LINEAGE, "tree-dependence",
      "try to remove the last elements of trees first")
  ),
  cl::cat{reducerCategory},
  cl::init(Ordering::SEQUENTIAL_FR)};

static cl::opt<testshrink::RevisitPolicy> revisitPolicy {"revisit",
  cl::desc{"Select whether the reducer will revisit complements after one succeeds"},
  cl::values(
    clEnumValN(testshrink::RevisitPolicy::ORIGINAL_DD, "dd",
      "enable revisiting"),
    clEnumValN(testshrink::RevisitPolicy::ONE_PASS, "skip",
      "disable revisiting")
  ),
  cl::cat{reducerCategory},
  cl::init(testshrink::RevisitPolicy::ORIGINAL_DD)};

static cl::opt<bool> prefilterTreeOpt {"prefilter",
  cl::desc{"Prefilter the less useful nodes of the tree."},
  cl::cat{reducerCategory},
  cl::init(false)};

static cl::opt<bool> liftListsOpt {"liftlists",
  cl::desc{"Lift lists."},
  cl::cat{reducerCategory},
  cl::init(false)};

static cl::opt<bool> useTokenCache {"tokencache",
  cl::desc{"Cache test results across levels of the tree."},
  cl::cat{reducerCategory},
  cl::init(false)};


class TimeoutGuard {
public:
  TimeoutGuard()
    : seconds{timeoutOpt} {
    if (seconds) {
      timeout.startTimer();
    }
  }

  // We don't really care about preserving state, so moved timers are fresh.
  TimeoutGuard(TimeoutGuard&& other)
    : TimeoutGuard()
      { }

  ~TimeoutGuard() {
    if (seconds) {
      timeout.stopTimer();
    }
  }

  bool
  hasTimedOut() noexcept {
    if (seconds) {
      timeout.stopTimer();
      double elapsed = timeout.getTotalTime().getWallTime();
      timeout.startTimer();
      return seconds <= elapsed;
    }
    return false;
  }

private:
  uint32_t seconds;
  llvm::TimerGroup timerGroup{"Timeouts", "Timeouts"};
  llvm::Timer timeout{"Timeout", "Timeout", timerGroup};
};


static void
replaceWith(TreeNode& node, TreeNode& replacement) {
  auto getLinkTo = [] (auto& n) -> TreeNode*& {
    auto& siblings = n.getParent()->getChildren();
    auto pos = std::find_if(std::begin(siblings), std::end(siblings),
      [&n] (auto& child) { return child == &n; });
    return *pos;
  };
  auto &nodeLink = getLinkTo(node);

  replacement.setParent(node.getParent());
  node.setParent(nullptr);

  nodeLink = &replacement;
}


static int
runChecker(const std::string& checkerPath,
           llvm::SmallString<256>& filePath) {
  bool failed = false;
  std::string err;
  StringRef empty;
  llvm::Optional<llvm::StringRef> redirects[] = { llvm::None, empty, empty };
  llvm::StringRef args[] = { checkerPath, filePath };
  auto result = llvm::sys::ExecuteAndWait(
      static_cast<const char*>(checkerPath.c_str()),
      llvm::makeArrayRef<llvm::StringRef>(args),
      llvm::NoneType::None,
      redirects,
      0,
      0,
      &err,
      &failed
    );

  if (failed) {
    for (auto arg : args) {
      llvm::errs() << arg << "\n";
    }
    llvm::report_fatal_error("Unable to run checker:\n\n" + failed);
  }

  return result;
}


static std::pair<std::unique_ptr<llvm::ToolOutputFile>,SmallString<256>>
getTemporaryOutputFile() {
  auto outputPath = llvm::SmallString<256>{};
  auto error = llvm::sys::fs::createTemporaryFile("reduced", "", outputPath);
  if (error) {
    llvm::report_fatal_error("Unable to create temporary output file.");
  }

  auto outfile =
    std::make_unique<llvm::ToolOutputFile>(outputPath, error, sys::fs::F_Text);
  if (error) {
    llvm::report_fatal_error("Unable to open temporary output file.");
  }
  return make_pair(std::move(outfile), outputPath);
}


class PropertyChecker {
private:
  SourceReducer::Listener& listener;
  llvm::StringRef checkerPath;
  AntlrGrammarInfo const& grammar;
  testshrinker::Tree<const antlr4::tree::ParseTree*> const& tree;

public:
  PropertyChecker(SourceReducer::Listener& listener,
                  llvm::StringRef checkerPath,
                  AntlrGrammarInfo const& grammar,
                  testshrinker::Tree<const antlr4::tree::ParseTree*> const& tree)
    : listener{listener},
      checkerPath{checkerPath},
      grammar{grammar},
      tree{tree}
      { }

  bool
  operator()(llvm::ArrayRef<Token const*> tokens) {
    listener.beginTest();
    
    auto tempfile    = getTemporaryOutputFile();
    auto &outfile    = tempfile.first;
    auto &outputPath = tempfile.second;

    grammar.print(outfile->os(), tokens);
    outfile->os().close();

    auto propertyHolds = (1 == runChecker(checkerPath, outputPath));

    listener.endTest(propertyHolds, tree);
    return propertyHolds;
  }

  void
  setStrategy(const char* strategy) const {
    listener.setTestStrategy(strategy);
  }

  void
  countRedundant(uint64_t numRedundant) {
    listener.countRedundant(numRedundant);
  }
};


static std::vector<const antlr4::Token*>
getTokensForChangeList(const testshrink::AtomSet& tokenIDs,
                       llvm::ArrayRef<const Token*> tokens) {
  auto results = std::vector<const antlr4::Token*>(tokenIDs.count());
  std::transform(tokenIDs.begin(), tokenIDs.end(), results.begin(),
    [=] (const auto id) { return tokens[id]; });
  return results;
}


class TokenCache : public testshrink::DefaultTestCache {
public:
  explicit TokenCache(antlr4::tree::ParseTree& tree)
    : tree{tree}
      { }

  void
  setLevelNodes(llvm::ArrayRef<antlr4::tree::ParseTree*> newLevelNodes) {
    levelNodes = newLevelNodes;
  }

private:
  antlr4::tree::ParseTree& tree;
  std::set<testshrink::AtomSet,testshrink::CompareAtomSets> failedTestsCache;
  llvm::ArrayRef<antlr4::tree::ParseTree*> levelNodes;

  testshrink::AtomSet
  getTokenSet(testshrink::AtomSet const& configuration) const noexcept {
    testshrink::AtomSet atomSet;
    llvm::SmallPtrSet<const antlr4::tree::ParseTree*,32> toSkip;
    auto& mutableNodeIDs = const_cast<testshrink::AtomSet&>(configuration);
    for (std::size_t i = 0; i < levelNodes.size(); ++i) {
      if (!mutableNodeIDs.test(i)) {
        toSkip.insert(levelNodes[i]);
      }
    }

    for (auto* token : getTokensSkipping(*asTree(&tree), toSkip)) {
      atomSet.set(getTokenIndex(token));
    }
    return atomSet;
  }

  bool
  containsImpl(testshrink::AtomSet const& configuration) const override {
    auto tokenSet = getTokenSet(configuration);
    return failedTestsCache.count(tokenSet);
  }

  bool
  addImpl(testshrink::AtomSet const& configuration) override {
    auto tokenSet = getTokenSet(configuration);
    return failedTestsCache.insert(tokenSet).second;
  }
};


template<typename Node>
std::unique_ptr<testshrink::Splitter>
getSplitPolicy(llvm::ArrayRef<Node> candidates) {
  switch (splitMode) {
    case SplitMode::HALF:
      return std::make_unique<testshrink::HalvingSplitter>();
  }
  llvm_unreachable("Invalid split mode in getSplitPolicy.");
}


std::unique_ptr<testshrink::GranularitySearcher>
getSearcher(testshrink::TestRunner& runner, testshrink::TestCache& cache) {
  return std::make_unique<testshrink::SearchExecutor>(runner, cache, revisitPolicy);
}


template<typename Node>
std::unique_ptr<testshrink::Prioritizer>
getPrioritizer(llvm::ArrayRef<Node> candidates) {
  bool reverseSubset = false, reverseComplement = false;
  switch (orderMode) {
    case Ordering::SEQUENTIAL_FF:
      break;
    case Ordering::SEQUENTIAL_FR:
      reverseComplement = true;
      break;
    case Ordering::SEQUENTIAL_RF:
      reverseSubset = true;
      break;
    case Ordering::SEQUENTIAL_RR:
      reverseSubset = reverseComplement = true;
      break;
    default:
      llvm_unreachable("Invalid ordering mode selected.");
  }
  using Prioritizer = testshrink::InSequencePrioritizer;
  return std::make_unique<Prioritizer>(reverseSubset, reverseComplement);
}


template<typename Node>
std::unique_ptr<testshrink::TestShrinker>
getShrinker(llvm::ArrayRef<Node> candidates,
            testshrink::TestRunner& runner,
            testshrink::TestCache& cache) {
  auto prioritizer = getPrioritizer(candidates);
  auto splitter    = getSplitPolicy(candidates);
  auto searcher    = getSearcher(runner, cache);
  return std::make_unique<testshrink::OwningHierarchicalShrinkerWrapper>(
      std::move(searcher), std::move(prioritizer), std::move(splitter)
    );
}


class AntlrDDTestRunner : public testshrink::TestRunner {
  using AtomSet = testshrink::AtomSet;
  using Token = antlr4::Token;
  llvm::ArrayRef<const Token*> tokens;
  PropertyChecker& propertyHolds;

  Outcome
  runImpl(AtomSet const& tokenIDs) override {
    auto resultTokens = getTokensForChangeList(tokenIDs, tokens);
    return propertyHolds(resultTokens) ? Outcome::FOUND : Outcome::NOT_FOUND;
  }

public:
  AntlrDDTestRunner(llvm::ArrayRef<const Token*> tokens,
                    PropertyChecker& propertyHolds)
    : tokens{tokens},
      propertyHolds{propertyHolds}
      { }
};


static std::vector<const antlr4::Token*>
getTokens(llvm::ArrayRef<const testshrinker::TreeNode<const antlr4::tree::ParseTree*>*> leaves) {
  std::vector<const antlr4::Token*> tokens;
  tokens.reserve(leaves.size());
  for (auto* leaf : leaves) {
    if (auto* token = getToken(leaf->getElement())) {
      tokens.push_back(token);
    }
  }
  return tokens;
}


static std::vector<const antlr4::Token*>
getTokensSkipping(testshrinker::Tree<const antlr4::tree::ParseTree*>& tree,
                  llvm::SmallPtrSetImpl<const testshrinker::TreeNode<const antlr4::tree::ParseTree*>*>& toSkip) {
  return getTokens(tree.root->getLeavesSkipping(toSkip));
}


static std::vector<const antlr4::Token*>
getTokens(testshrinker::Tree<const antlr4::tree::ParseTree*>& tree) {
  return getTokens(tree.root->getLeavesWhen([] (auto&, auto&) {return true; }));
}


template<typename Tree, typename Node>
class AntlrHDDTestRunner : public testshrink::TestRunner {
  using AtomSet = testshrink::AtomSet;
  PropertyChecker &checker;
  Tree& tree;
  llvm::ArrayRef<Node*> nodes;

  Outcome
  runImpl(AtomSet const& nodeIDs) override {
    llvm::SmallPtrSet<const Node*,32> toSkip;
    auto& mutableNodeIDs = const_cast<AtomSet&>(nodeIDs);
    for (std::size_t i = 0; i < nodes.size(); ++i) {
      if (!mutableNodeIDs.test(i)) {
        toSkip.insert(nodes[i]);
      }
    }

    auto tokens = getTokensSkipping(tree, toSkip);
    return checker(tokens) ? Outcome::FOUND : Outcome::NOT_FOUND;
  }

public:
  AntlrHDDTestRunner(PropertyChecker &checker,
                     Tree& tree,
                     llvm::ArrayRef<Node*> nodes)
    : checker{checker},
      tree{tree},
      nodes{nodes}
      { }
};


template<typename Tree, typename Node>
AntlrHDDTestRunner<Tree, Node>
makeAntlrHDDTestRunner(PropertyChecker &checker,
                       Tree& tree,
                       llvm::ArrayRef<Node*> nodes) {
  return AntlrHDDTestRunner<Tree, Node>(checker, tree, nodes);
}


static void
pruneTokenlessSubtrees(testshrinker::Tree<const antlr4::tree::ParseTree*>& tree) {
  using Node = testshrinker::Tree<const antlr4::tree::ParseTree*>::Node;
  // First collect the parents of all leaves that are rules
  auto leaves = tree.root->getLeaves();
  auto rules = std::partition(leaves.begin(), leaves.end(),
               [] (auto* node) { return node->isAttr(Node::IS_RULE); });
  std::deque<Node*> worklist(std::distance(leaves.begin(), rules));
  std::transform(leaves.begin(), rules, worklist.begin(),
                 [] (const auto* node) { return node->getParent(); });

  // Then prune their children recursively as possible.
  auto nodeIsRemovable = [] (auto* node) -> bool {
    assert(node && "Null node passed to nodeIsRemovable");
    auto& children = node->getChildren();
    return node->isAttr(TreeNode::IS_RULE)
      && (children.empty()
        || std::all_of(children.begin(), children.end(),
                       [] (auto* child) { return !child; }));
  };

  while (!worklist.empty()) {
    auto* node = worklist.front();
    worklist.pop_front();

    bool hasRemainingChildren = false;
    auto& children = node->getChildren();
    for (auto*& child : children) {
      if (!child) {
        continue;
      }
      if (nodeIsRemovable(child)) {
        child = nullptr;
      } else {
        hasRemainingChildren = true;
      }
    }

    if (!hasRemainingChildren && node->getParent()) {
      worklist.push_back(node->getParent());
    }
  }
}


static void
tagNullableNodes(testshrinker::Tree<const antlr4::tree::ParseTree*>& tree,
                 antlr4::Parser& parser) {
  using Node = testshrinker::Tree<const antlr4::tree::ParseTree*>::Node;
  auto ruleNames = getRuleNames(parser);
  auto option = llvm::StringRef("pnf_option_");
  auto plus = llvm::StringRef("pnf_plus_");
  auto star = llvm::StringRef("pnf_star_");

  auto markNullable = [&ruleNames, option, plus, star] (auto* node) -> void {
    if (!node) {
      return;
    }
    auto& children = node->getChildren();

    auto ruleIndex = getRuleIndex(node->getElement());
    if (ruleIndex.first) {
      llvm::StringRef name{ruleNames[ruleIndex.second]};
      if (name.startswith(star) || name.startswith(plus)) {
        node->setAttr(Node::IS_LIST);
      }
      if (name.startswith(star)
          || name.startswith(plus)
          || name.startswith(option)) {
        node->setAttr(Node::IS_ALWAYS_NULLABLE);
        for (auto*& child : children) {
          if (child) {
            child->setAttr(Node::IS_ALWAYS_NULLABLE);
          }
        }
      }
    }

    bool nullable = node->isAttr(Node::IS_RULE)
      && std::all_of(children.begin(), children.end(),
           [] (auto* child) { return !child || child->isNullable(); });
    if (nullable && nullabilityInferenceOpt) {
      node->setAttr(Node::IS_ALWAYS_NULLABLE);
    }
  };
  Timer nullabilityTimer{"Nullability Time", "Nullability Time"};
  nullabilityTimer.startTimer();
  tree.visitPostorder(markNullable);
  nullabilityTimer.stopTimer();
}


static testshrinker::Tree<const antlr4::tree::ParseTree*>::Node::ChildList
getRemainingChildren(testshrinker::Tree<const antlr4::tree::ParseTree*>::Node* node) {
  auto childCopy = node->getChildren();
  auto firstNull = std::partition(childCopy.begin(), childCopy.end(),
    [] (auto* node) { return node != nullptr; });
  childCopy.erase(firstNull, childCopy.end());
  return childCopy;
}


static void
pruneExtraNulls(testshrinker::Tree<const antlr4::tree::ParseTree*>& tree) {
  using Node = testshrinker::Tree<const antlr4::tree::ParseTree*>::Node;
  size_t remaining = 0, list = 0, optional = 0;
  auto pruneChain = [&remaining, &list, &optional] (auto* start, auto& prune) {
    auto* node = start;
    bool clear = false;
    // Traverse one chain and strip nullability after the first nullable node
    while (node) {
      if (clear) {
        if (node->getParent()->isAttr(Node::IS_LIST)) {
          list += 1;
        } else {
          optional += 1;
        }
        node->clearAttr(Node::IS_ALWAYS_NULLABLE);
      } else if (node->isNullable()) {
        remaining += 1;
        clear = true;
      }
      auto remainingKids = getRemainingChildren(node);
      if (remainingKids.size() != 1) {
        break;
      }
      node = remainingKids.front();
    }

    if (!node) {
      return;
    }

    // Do the same to all children
    for (auto* child : node->getChildren()) {
      prune(child, prune);
    }
  };
  pruneChain(tree.root, pruneChain);
  llvm::outs() << "Pruning Stats >> Total: " << (remaining + list + optional)
               << " List: " << list
               << " Optional: " << optional
               << " Remaining: " << remaining
               << "\n";
}


static void
liftListIdioms(testshrinker::Tree<const antlr4::tree::ParseTree*>& tree,
                 antlr4::Parser& parser) {
  using Node = testshrinker::Tree<const antlr4::tree::ParseTree*>::Node;
  using ChildList = typename Node::ChildList;

  auto ruleNames = getRuleNames(parser);
  auto leftList  = llvm::StringRef("pnf_list_left_");
  auto rightList = llvm::StringRef("pnf_list_right_");

  auto makeListNode = [&tree] (auto* node, auto& children, auto& delimiters) {
    auto* list = tree.createListNode(delimiters, node->getElement(), children);
    replaceWith(*node, *list);
    for (auto* child : children) {
      if (child) {
        child->setParent(list);
        child->setAttr(TreeNode::IS_ALWAYS_NULLABLE);
      }
    }
    for (auto* child : delimiters) {
      // There is logically no valid parent for these nodes.
      if (child) {
        child->setParent(nullptr);
      }
    }
    list->setAttr(Node::IS_LIST);
    list->setAttr(Node::IS_ALWAYS_NULLABLE);
    return list;
  };

  std::deque<Node*> worklist = { tree.root };
  while (!worklist.empty()) {
    auto* node = worklist.front();
    worklist.pop_front();
    if (!node) {
      continue;
    }

    auto ruleInfo = getRuleIndex(node->getElement());
    bool isRule = ruleInfo.first;
    auto ruleIndex = ruleInfo.second;
    if (isRule) {
      llvm::StringRef name{ruleNames[ruleIndex]};
      if (name.startswith(leftList)) {
        ChildList children = { node->getChildren().front() };
        ChildList delimiters;
        if (auto* kleeneNode = node->getChildren().back()) {
          for (auto* child : kleeneNode->getChildren()) {
            if (child) {
              assert(child->getChildren().size() == 2);
              delimiters.push_back(child->getChildren().front());
              children.push_back(child->getChildren().back());
            }
          }
        }
        node = makeListNode(node, children, delimiters);

      } else if (name.startswith(rightList)) {
        // TODO
      }
    }

    auto& children = node->getChildren();
    worklist.insert(worklist.end(), children.begin(), children.end());
  }
}


void
SourceReducer::visitTree(antlr4::tree::ParseTree& tree,
                         antlr4::Parser& parser,
                         AntlrGrammarInfo& info) {
  auto shrinkerTree = createReducerTree(tree, info);

  pruneTokenlessSubtrees(shrinkerTree);
  if (liftListsOpt) {
    liftListIdioms(shrinkerTree, parser);
  }
  tagNullableNodes(shrinkerTree, parser);
  if(nullabilityPruningOpt) {
    pruneExtraNulls(shrinkerTree);
  }

  auto size = getSize(shrinkerTree);
  llvm::outs() << "After filtering size (nodes): " << size.nodes << "\n";

  listener.beginReductionPhase(shrinkerTree);
  reduce(shrinkerTree, parser, info);
  listener.endReductionPhase(shrinkerTree);
}


void
AntlrNullReducer::reduce(ShrinkerTree& tree,
                         antlr4::Parser& parser,
                         AntlrGrammarInfo const & grammar) {
  
  auto tokens = getTokens(tree);
  grammar.print(out, tokens);
  out << "\n";
}


void
GraphvizTreePrinter::reduce(ShrinkerTree& tree,
                            antlr4::Parser& parser,
                            AntlrGrammarInfo const & grammar) {
  auto ruleNames = getRuleNames(parser);
  auto nodePrinter = [&ruleNames] (auto& out, auto* element) {
    auto ruleIndex = getRuleIndex(element);
    auto altNum    = getAlternativeIndex(element);
    if (ruleIndex.first) {
      out << "R" << ruleIndex.second
          << " A" << altNum.second
          << " " << ruleNames[ruleIndex.second];
    } else if (auto* token = getToken(element)) {
      out.write_escaped(getText(token));
    } else {
      out << "nullptr";
    }
  };
  tree.print(llvm::outs(), nodePrinter);
}


void
TestChecker::reduce(ShrinkerTree& tree,
                    antlr4::Parser& parser,
                    AntlrGrammarInfo const & grammar) {
  auto checker = PropertyChecker{listener, propertyChecker, grammar, tree};
  auto tokens  = getTokens(tree);
  auto result  = checker(tokens);

auto ruleNames = getRuleNames(parser);
tree.print(llvm::outs(), [&ruleNames](auto& out, auto*element) -> void {
  auto ruleIndex = getRuleIndex(element);
  auto altNum    = getAlternativeIndex(element);
  if (ruleIndex.first) {
    out << "R" << ruleIndex.second
        << " A" << altNum.second
        << " " << ruleNames[ruleIndex.second];
  } else if (auto* token = getToken(element)) {
    out.write_escaped(getText(token));
  } else {
    out << "nullptr";
  }
});
  auto* outcome = (result) ? "SUCCEEDED" : "FAILED";
  out << "Checker " << outcome << " for the original input.\n"
      << "Result: " << result << "\n";

  out << "\n";
}


static testshrink::AtomSet
createChangeIDSetOfSize(const size_t size) {
  auto changeIDs = testshrink::AtomSet{};
  for (testshrink::Atom id = 0; id < size; ++id) {
    changeIDs.set(id);
  }
  return changeIDs;
}


void
AntlrTokenReducer::reduce(ShrinkerTree& tree,
                          antlr4::Parser& parser,
                          AntlrGrammarInfo const & grammar) {
  auto checker   = PropertyChecker{listener, propertyChecker, grammar, tree};
  auto terminals = tree.root->getLeavesWhen([] (auto&, auto&) { return true; });
  auto lastTerminal = std::stable_partition(terminals.begin(), terminals.end(),
    [] (auto* terminal) { return getToken(terminal->getElement()); });
  terminals.erase(lastTerminal, terminals.end());
  auto tokens = getTokens(terminals);
  auto changes   = createChangeIDSetOfSize(terminals.size());

  AntlrDDTestRunner runner{tokens, checker};
  auto cache     = testshrink::DefaultTestCache{};
  auto shrinker  = getShrinker(llvm::makeArrayRef(terminals), runner, cache);
  auto resultIDs = shrinker->shrinkTestCase(changes, runner);

  checker.countRedundant(shrinker->getRedundantTests());

  auto results = getTokensForChangeList(resultIDs, tokens);
  grammar.print(out, results);
  out << "\n";
}


namespace {


struct Identity {
  template<typename T>
  constexpr auto
  operator()(T&& t) const noexcept -> decltype(std::forward<T>(t)) {
    return std::forward<T>(t);
  }
};


template<typename E>
static SmallPtrSet<testshrinker::TreeNode<E>*,32>
pruneTreeFrontier(PropertyChecker& checker,
                  testshrinker::Tree<E>& tree,
                  llvm::ArrayRef<testshrinker::TreeNode<E>*> candidates,
                  testshrink::TestCache* cache=nullptr) {
  auto toRemove  = SmallPtrSet<testshrinker::TreeNode<E>*,32>{};
  auto changes   = createChangeIDSetOfSize(candidates.size());

  auto runner       = makeAntlrHDDTestRunner(checker, tree, candidates);
  auto defaultCache = testshrink::DefaultTestCache{};
  auto shrinker     = getShrinker(candidates, runner, cache ? *cache : defaultCache);
  auto idsToKeep    = shrinker->shrinkTestCase(changes, runner);

  checker.countRedundant(shrinker->getRedundantTests());

  for (testshrink::Atom id = 0; id < candidates.size(); ++id) {
    if (idsToKeep.test(id)) {
      continue;
    }
    auto* node = candidates[id];
    node->eraseFromParent();
    toRemove.insert(node);
  }

  return toRemove;
}


class AntlrLevelOperation
  : public testshrinker::LevelOperation<const antlr4::tree::ParseTree*> {
public:
  AntlrLevelOperation(testshrinker::LevelListener& listener,
                      Tree& tree,
                      AntlrGrammarInfo const& grammar,
                      antlr4::Parser& parser,
                      PropertyChecker& checker)
    : testshrinker::LevelOperation<const antlr4::tree::ParseTree*>{listener},
      tree{tree},
      grammar{grammar},
      parser{parser},
      checker{checker}
      { }

protected:
  Tree& tree;
  AntlrGrammarInfo const& grammar;
  antlr4::Parser& parser;
  PropertyChecker& checker;
};


template<typename Sorter, typename Selector>
class HDDLevelOperation : public AntlrLevelOperation {
public:
  HDDLevelOperation(testshrinker::LevelListener& listener,
                    Tree& tree,
                    AntlrGrammarInfo const& grammar,
                    antlr4::Parser& parser,
                    PropertyChecker& checker,
                    Sorter& sort,
                    Selector& select)
    : AntlrLevelOperation{listener, tree, grammar, parser, checker},
      sort{sort},
      select{select}
      { }

private:
  Sorter& sort;
  Selector& select;

  bool
  applyImpl(std::vector<Node*>& nodes, size_t targetLevel) override {
    auto candidates = select(llvm::makeArrayRef(nodes));
    sort(candidates);
    auto toRemove = pruneTreeFrontier(checker, tree, llvm::makeArrayRef(candidates), nullptr);
    auto pos = std::remove_if(nodes.begin(), nodes.end(),
      [&toRemove] (auto* node) { return toRemove.count(node); });
    nodes.erase(pos, nodes.end());
    return !toRemove.empty();
  }

  llvm::StringRef getName() override { return "HDD"; }
};


class PropertyCheckingLevelListener : public testshrinker::LevelListener {
public:
  PropertyCheckingLevelListener(PropertyChecker& checker)
    : checker{checker}
      { }

  void
  beginOperation(llvm::StringRef name) override {
    checker.setStrategy(name.data());
  }

private:
  PropertyChecker& checker;
};


}


void
AntlrHDDReducer::reduce(ShrinkerTree& tree,
                        antlr4::Parser& parser,
                        AntlrGrammarInfo const & grammar) {
  Identity identity;
  using Operation = HDDLevelOperation<Identity, Identity>;
  auto checker    = PropertyChecker{listener, propertyChecker, grammar, tree};
  auto opListener = PropertyCheckingLevelListener{checker};
  auto operation  = Operation{opListener, tree, grammar, parser, checker, identity, identity};
  auto reducer    = testshrinker::TreeShrinker<const antlr4::tree::ParseTree*>{&operation};
  reducer(tree);
  auto tokens = getTokens(tree);
  grammar.print(out, tokens);
  out << "\n";
}


enum QueueMode {
  NODE,
  LIST,
  HYBRID,
  PERSES_NODE
};

static cl::opt<QueueMode> queueModeOpt {"queue-mode",
  cl::desc{"Select the mechanism for queue based reduction"},
  cl::values(
    clEnumValN(QueueMode::NODE, "node",
      "One node at a time, ordered by token weight."),
    clEnumValN(QueueMode::LIST, "list",
      "Perses style list reduction, ordered by quantifier token weight."),
    clEnumValN(QueueMode::HYBRID, "hybrid",
      "List reduction in a priority inversion aware fashion."),
    clEnumValN(QueueMode::PERSES_NODE, "persesnode",
      "Node by node reduction using parent weights and IDs as in perses.")
  ),
  cl::cat{reducerCategory},
  cl::init(QueueMode::LIST)};


template<class E>
static llvm::DenseMap<typename testshrinker::Tree<E>::Node*, uint32_t>
computeBFSPosition(testshrinker::Tree<E>& tree) {
  using Node = typename testshrinker::Tree<E>::Node;
  llvm::DenseMap<Node*, uint32_t> bfsPositions;
  std::vector<Node*> nodes;
  nodes.reserve(1024);
  nodes.push_back(tree.root);

  size_t next = 0;
  while (next < nodes.size()) {
    auto* node = nodes[next];
    ++next;

    auto& children = node->getChildren();
    for (auto* child : children) {
      if (child) {
        nodes.push_back(child);
      }
    }
  }

  for (unsigned i = 0, e = nodes.size(); i < e; ++i) {
    bfsPositions[nodes[i]] = i;
  }
  return bfsPositions;
}


template<class E>
static llvm::DenseMap<typename testshrinker::Tree<E>::Node*, uint32_t>
computeTokensBelowNodes(testshrinker::Tree<E>& tree) {
  using Node = typename testshrinker::Tree<E>::Node;
  llvm::DenseMap<Node*, uint32_t> tokenWeights;
  auto count = [&tokenWeights] (Node* node) -> void {
    if (!node->isAttr(Node::IS_RULE)) {
      tokenWeights[node] = 1;
    } else {
      uint32_t tokenCount = 0;
      for (auto* child : node->getChildren()) {
        if (child) {
          tokenCount += tokenWeights[child];
        }
      }
      tokenWeights[node] = tokenCount;
    }
  };
  tree.visitPostorder(count);
  return tokenWeights;
}


struct PriorityQueueReducerImpl {
  AntlrGrammarInfo const& grammar;
  antlr4::Parser& parser;
  PropertyChecker& checker;
  TimeoutGuard timer;
  using Count = uint32_t;

  PriorityQueueReducerImpl(AntlrGrammarInfo const& grammar,
                           antlr4::Parser& parser,
                           PropertyChecker& checker)
    : grammar{grammar},
      parser{parser},
      checker{checker},
      timer{}
      { }

  template<typename E>
  size_t
  operator()(testshrinker::Tree<E>& tree, const size_t targetLevel = -1) {
    Worklist<E> worklist;
    Weight root_weight {0,0,0};
    worklist.push({tree.root, root_weight});
    auto processor = getQueueProcessor(tree, checker);
    while (!worklist.empty()) {
      if (timer.hasTimedOut()) {
llvm::errs() << "TIMED OUT!\n";
        break;
      }
      processor->processWork(worklist);
    }

    // For this reducer, the return code is just a flag for whether anything
    // was removed at all.
    return !processor->anyRemoved() ? -1 : 0;
  }

private:
  template <class E>
  using Node = typename testshrinker::Tree<E>::Node;

  using Weight = std::tuple<Count, Count, Count>;
  enum Phase { LIST = 3, NORMAL = 2, NAMED_LIST = 1 };
  // By using (Phase, Tokens, BFS Position) as the priority or weight,
  // we can provide richer structure to the search. The best order for this
  // process is unclear, but we should strive for left to right corresponding
  // to decreasing importance. Nodes of higher weight are explored earlier.
  template<typename E>
  struct Entry {
    Node<E>* node;
    Weight weight;
    bool operator<(Entry n2) const { return this->weight < n2.weight; }
  };

  template<typename E>
  using Worklist = std::priority_queue<Entry<E>>;

  template <typename E>
  class WorkPolicy {
  public:
    using ChildList = typename Node<E>::ChildList;
    const llvm::DenseMap<Node<E>*, Count> nodeOrder;
    const llvm::DenseMap<Node<E>*, Count> tokenWeight;

    explicit WorkPolicy(testshrinker::Tree<E>& tree, PropertyChecker& checker)
      : nodeOrder{computeBFSPosition(tree)},
        tokenWeight{computeTokensBelowNodes(tree)},
        tree{tree},
        checker{checker},
        removed{false}
        { }

    void
    remove(Node<E>* node) {
      node->eraseFromParent();
      removed = true;
    }

    void
    processWork(Worklist<E>& worklist) {
      processWorkImpl(worklist);
    }

    bool
    removalSucceeds(Node<E>* node) {
      checker.setStrategy("Node");
      llvm::SmallPtrSet<const Node<E>*,32> toSkip;
      toSkip.insert(node);
      auto remaining = getTokensSkipping(tree, toSkip);
      return checker(remaining);
    }

    SmallPtrSet<testshrinker::TreeNode<E>*,32>
    shrinkList(llvm::ArrayRef<Node<E>*> candidates) {
      checker.setStrategy("List");
      return pruneTreeFrontier(checker, tree, candidates);
    }

    bool anyRemoved() const noexcept { return removed; }

    bool
    isListElement(const Node<E>* node) const noexcept {
      auto* parent = node->getParent();
      return parent && parent->isAttr(Node<E>::IS_LIST);
    }

    void
    addWork(Worklist<E>& worklist, ChildList& newWork) {
      for (auto* node : newWork) {
        if (node) {
          worklist.push({node, this->makeWeight(node)});
        }
      }
    }

  private:
    testshrinker::Tree<E>& tree;
    PropertyChecker& checker;
    bool removed;

    virtual void processWorkImpl(Worklist<E>& worklist) = 0;
    virtual Weight makeWeight(Node<E>* node) = 0;
  };

  template <typename E>
  class NodePolicy : public WorkPolicy<E> {
  public:
    NodePolicy(testshrinker::Tree<E>& tree, PropertyChecker& checker)
      : WorkPolicy<E>{tree, checker}
        { }

  private:
    void
    processWorkImpl(Worklist<E>& worklist) override {
      auto work = worklist.top();
      worklist.pop();

      if (work.node->isNullable() && this->removalSucceeds(work.node)) {
        this->remove(work.node);

      } else {
        this->addWork(worklist, work.node->getChildren());
      }
    }

    Weight
    makeWeight(Node<E>* node) override {
      return Weight{this->tokenWeight.lookup(node),
                    this->nodeOrder.lookup(node), 0};
    }
  };

  template <typename E>
  class PersesNodePolicy : public WorkPolicy<E> {
  public:
    PersesNodePolicy(testshrinker::Tree<E>& tree, PropertyChecker& checker)
      : WorkPolicy<E>{tree, checker}
        { }

  private:
    void
    processWorkImpl(Worklist<E>& worklist) override {
      auto work = worklist.top();
      worklist.pop();

      if (work.node->isNullable() && this->removalSucceeds(work.node)) {
        this->remove(work.node);

      } else {
        this->addWork(worklist, work.node->getChildren());
      }
    }

    Weight
    makeWeight(Node<E>* node) override {
      auto* parent = node->getParent();
      return Weight{parent ? this->tokenWeight.lookup(parent) : uint32_t(-1),
                    parent ? this->nodeOrder.lookup(parent) : uint32_t(-1),
                    this->nodeOrder.lookup(node)};
    }
  };

  template <typename E>
  class ListPolicy : public WorkPolicy<E> {
  public:
    ListPolicy(testshrinker::Tree<E>& tree, PropertyChecker& checker)
      : WorkPolicy<E>{tree, checker}
        { }

  private:
    void
    processWorkImpl(Worklist<E>& worklist) override {
      auto work = worklist.top();
      worklist.pop();

      if (work.node->isAttr(Node<E>::IS_LIST)) {
        auto children = work.node->getChildren();
        auto null = std::remove(children.begin(), children.end(), nullptr);
        children.erase(null, children.end());
        auto toRemove = this->shrinkList(children);
        for (auto* node : toRemove) {
          this->remove(node);
        }
        this->addWork(worklist, work.node->getChildren());

      } else if (work.node->isNullable()
                 && !this->isListElement(work.node)
                 && this->removalSucceeds(work.node)) {
        this->remove(work.node);

      } else {
        this->addWork(worklist, work.node->getChildren());
      }
    }

    Weight
    makeWeight(Node<E>* node) override {
      return Weight{this->tokenWeight.lookup(node),
                    this->nodeOrder.lookup(node), 0};
    }
  };

  template <typename E>
  class HybridPolicy : public WorkPolicy<E> {
  public:
    HybridPolicy(testshrinker::Tree<E>& tree, PropertyChecker& checker)
      : WorkPolicy<E>{tree, checker}
        { }

  private:
    constexpr static unsigned MINIMUM_GROUP_SIZE = 2;

    typename Node<E>::ChildList
    takeGroup(Worklist<E>& worklist) {
      typename Node<E>::ChildList group = { worklist.top().node };
      const auto first = std::get<0>(worklist.top().weight);
      const auto second = std::get<1>(worklist.top().weight);
      worklist.pop();

      auto isInGroup = [first, second] (auto& weight) {
        return std::get<0>(weight) >= first
            && std::get<1>(weight) == second;
      };

      while (!worklist.empty() && isInGroup(worklist.top().weight)) {
        group.push_back(worklist.top().node);
        worklist.pop();
      }

      return group;
    }

    void
    processWorkImpl(Worklist<E>& worklist) override {
      auto group = takeGroup(worklist);
      auto last = std::stable_partition(group.begin(), group.end(),
        [] (auto* node) { return node->isNullable(); });
      for (auto* node : llvm::make_range(last, group.end())) {
        this->addWork(worklist, node->getChildren());
      }
      group.erase(last, group.end());

      if (group.empty()) {
        return;
      }

      if (group.size() < MINIMUM_GROUP_SIZE)  {
        for (auto* node : group) {
          if (this->removalSucceeds(node)) {
            this->remove(node);
          } else {
            this->addWork(worklist, node->getChildren());
          }
        }

      } else {
        std::reverse(group.begin(), group.end());
        auto toRemove = this->shrinkList(group);
        for (auto* node : toRemove) {
          this->remove(node);
        }

        auto last = std::partition(group.begin(), group.end(),
          [&toRemove] (auto* node) { return !toRemove.count(node); });
        group.erase(last, group.end());
        for (auto* node : group) {
          this->addWork(worklist, node->getChildren());
        }
      }
    }

    Weight
    makeWeight(Node<E>* node) override {
      return Weight{this->tokenWeight.lookup(node),
                    node->getParent() ? this->nodeOrder.lookup(node->getParent()) : 0,
                    this->nodeOrder.lookup(node)};
    }
  };

  template <class E>
  std::unique_ptr<WorkPolicy<E>>
  getQueueProcessor(testshrinker::Tree<E>& tree, PropertyChecker& checker) {
    switch (queueModeOpt) {
      case QueueMode::NODE:
        return std::make_unique<NodePolicy<E>>(tree, checker);
      case QueueMode::LIST:
        return std::make_unique<ListPolicy<E>>(tree, checker);
      case QueueMode::HYBRID:
        return std::make_unique<HybridPolicy<E>>(tree, checker);
      case QueueMode::PERSES_NODE:
        return std::make_unique<PersesNodePolicy<E>>(tree, checker);
    }
    llvm_unreachable("Invalid queue mode");
  }
};


void
AntlrPriorityQueueReducer::reduce(ShrinkerTree& tree,
                                  antlr4::Parser& parser,
                                  AntlrGrammarInfo const& grammar) {
  auto checker  = PropertyChecker{listener, propertyChecker, grammar, tree};

  using Reducer = PriorityQueueReducerImpl;
  auto reducer  = Reducer{grammar, parser, checker};
  reducer(tree);
  auto tokens = getTokens(tree);
  grammar.print(out, tokens);
  out << "\n";
}


////////////////////////////////////////////////////////////////////////////////
//  Fixed Point Based Reducers
////////////////////////////////////////////////////////////////////////////////


template <typename Reducer, typename E>
size_t
runToFixedPoint(SourceReducer::Listener& listener,
                Reducer& reducer,
                testshrinker::Tree<E>& tree,
                size_t targetLevel = -1) {
  size_t lastLevelChanged = -1;
  size_t maxLevelChanged = -1;
  while (true) {
    lastLevelChanged = reducer(tree, lastLevelChanged);
    listener.printProgressReport(tree);
    if (lastLevelChanged == static_cast<size_t>(-1)) {
      break;
    } else if (lastLevelChanged > maxLevelChanged
        || maxLevelChanged == static_cast<size_t>(-1)) {
      maxLevelChanged = lastLevelChanged;
    }
  }
  return maxLevelChanged;
}


void
AntlrHDDFixpointReducer::reduce(ShrinkerTree& tree,
                                antlr4::Parser& parser,
                                AntlrGrammarInfo const & grammar) {
  Identity identity;
  using Operation = HDDLevelOperation<Identity, Identity>;
  auto checker    = PropertyChecker{listener, propertyChecker, grammar, tree};
  auto opListener = PropertyCheckingLevelListener{checker};
  auto operation  = Operation{opListener, tree, grammar, parser, checker, identity, identity};
  auto reducer    = testshrinker::TreeShrinker<const antlr4::tree::ParseTree*>{&operation};

  runToFixedPoint(listener, reducer, tree);

  auto tokens = getTokens(tree);
  grammar.print(out, tokens);
  out << "\n";
}


void
AntlrPriorityQueueFixpointReducer::reduce(ShrinkerTree& tree,
                                          antlr4::Parser& parser,
                                          AntlrGrammarInfo const& grammar) {
  auto checker  = PropertyChecker{listener, propertyChecker, grammar, tree};

  using Reducer = PriorityQueueReducerImpl;
  auto reducer  = Reducer{grammar, parser, checker};

  runToFixedPoint(listener, reducer, tree);

  auto tokens = getTokens(tree);
  grammar.print(out, tokens);
  out << "\n";
}

