
#include "antlr-plugins.h"
#include "antlr-wrapper.h"

#include "antlr4-runtime.h"
#include "RuleContext.h"

#include <llvm/ADT/DenseSet.h>
#include <llvm/ADT/EquivalenceClasses.h>
#include <llvm/ADT/PointerIntPair.h>
#include <llvm/ADT/SmallVector.h>
#include <llvm/Support/raw_ostream.h>
#include <numeric>
#include <unordered_set>

using namespace antlr4;
using namespace llvm;


void
printSource(const llvm::ArrayRef<const antlr4::Token*> tokens,
            llvm::raw_ostream& out) {
  auto lastTokenStop = INVALID_INDEX;

  for (auto* token : tokens) {
    if (lastTokenStop != token->getStartIndex() - 1) {
      out << ' ';
    }
    lastTokenStop = token->getStopIndex();
    out << token->getText();
  }
}


enum class VisitAction {
  SKIP_CHILDREN,
  VISIT_CHILDREN,
  VISIT_CHILDREN_OF
};

using VisitResult = llvm::PointerIntPair<antlr4::tree::ParseTree*,3,VisitAction>;

static VisitResult
makeResult(antlr4::tree::ParseTree* tree) {
  return VisitResult(tree, VisitAction::VISIT_CHILDREN_OF);
}


static VisitResult
makeResult(VisitAction action) {
  return VisitResult(nullptr, action);
}


// Performs a standard, stack based DFS of the parse tree. Nodes of the tree
// are visited in a preorder traversal. The `visit` must be callable and
// is invoked on each node of the tree as traversed. It should return
// true if the children of that node are to be visited and false otherwise.
template<typename Visitor>
static void
traverseASTInPreorder(const antlr4::tree::ParseTree& tree, Visitor visit) {
  using iteratorTy = decltype (tree.children.cbegin());
  std::stack<std::pair<iteratorTy,iteratorTy>> traversalState;
  traversalState.emplace(tree.children.cbegin(), tree.children.cend());

  while (!traversalState.empty()) {
    auto &top = traversalState.top();

    if (top.first == top.second) {
      traversalState.pop();
      continue;
    }

    auto* node = *top.first;
    ++top.first;

    if (!node) {
      continue;
    }

    const VisitResult result = visit(node);
    if (result.getInt() == VisitAction::SKIP_CHILDREN) {
      continue;
    }

    auto* next = (result.getInt() == VisitAction::VISIT_CHILDREN_OF)
               ? result.getPointer() : node;
    auto& children = next->children;
    traversalState.emplace(children.begin(), children.end());
  }
}


// Performs a postorder traversal of the AST. The visitor `visit` should be
// callable and will be invoked once for every node in the tree.
template<typename Visitor>
static void
traverseASTInPostorder(const antlr4::tree::ParseTree& tree, Visitor visit) {
  std::stack<antlr4::tree::ParseTree*> preorder;

  traverseASTInPreorder(tree, [&preorder] (auto* node) {
    preorder.push(node);
    return makeResult(VisitAction::VISIT_CHILDREN);
  });

  while (!preorder.empty()) {
    auto* top = preorder.top();
    preorder.pop();
    visit(top);
  }
}


static void
setParent(TreeNode* parent, const TreeNode::ChildList& children) {
  for (auto* child : children) {
    child->setParent(parent);
  }
}


testshrinker::Tree<const antlr4::tree::ParseTree*>
createReducerTree(const antlr4::tree::ParseTree& tree,
                  AntlrGrammarInfo const& grammar) {
  using Element  = const antlr4::tree::ParseTree*;
  using TreeNode = testshrinker::TreeNode<Element>;
  using Rule     = const antlr4::RuleContext*;
  testshrinker::Tree<Element> shrinkerTree;
  llvm::DenseMap<Element, TreeNode*> trees;

  auto visit = [&trees, &shrinkerTree] (auto* parseTree) {
    TreeNode::ChildList children;
    children.reserve(parseTree->children.size());
    for (auto* child : parseTree->children) {
      children.push_back(trees[child]);
    }
    auto* newNode = shrinkerTree.createNode(parseTree, std::move(children));
    trees[parseTree] = newNode;
    setParent(newNode, newNode->getChildren());

    if (auto* rule = dynamic_cast<Rule>(parseTree)) {
      newNode->setAttr(TreeNode::IS_RULE);
    }
  };
  traverseASTInPostorder(tree, visit);
  visit(&tree);
  shrinkerTree.root = trees[&tree];
  return shrinkerTree;
}


testshrinker::TreeSize
getSize(const testshrinker::Tree<const antlr4::tree::ParseTree*>& tree) {
  auto tokenSize = [] (auto* node) {
    return getText(const_cast<antlr4::tree::ParseTree*>(node)).size();
  };
  return tree.getSize(tokenSize);
}


const antlr4::Token*
getToken(const antlr4::tree::ParseTree* tree) {
  if (auto* terminal = dynamic_cast<const tree::TerminalNode*>(tree)) {
    auto* token = const_cast<antlr4::tree::TerminalNode*>(terminal)->getSymbol();
    if (token->getType() != Token::EOF) {
      return token;
    }
  }
  return nullptr;
}


std::vector<std::string>
getRuleNames(const antlr4::Parser &parser) {
  return parser.getRuleNames();
}


std::pair<bool,unsigned>
getRuleIndex(const antlr4::tree::ParseTree* tree) {
  if (auto* rule = dynamic_cast<const antlr4::RuleContext*>(tree)) {
    return {true, rule->getRuleIndex()};
  }
  return {false, 0};
}


std::pair<bool,unsigned>
getAlternativeIndex(const antlr4::tree::ParseTree* tree) {
  if (auto* rule = dynamic_cast<const antlr4::RuleContext*>(tree)) {
    return {true, rule->getAltNumber()};
  }
  return {false, 0};
}


std::string
getText(const antlr4::Token* token) {
  if (token->getType() != Token::EOF) {
    return token->getText();
  }
  return {};
}


std::string
getText(antlr4::tree::ParseTree* tree) {
  if (auto* terminal = dynamic_cast<tree::TerminalNode*>(tree)) {
    return getText(terminal->getSymbol());
  }
  return {};
}


void
ASTOperation::operator()(AntlrGrammarInfo& grammar, llvm::StringRef buffer) {
  listener.beginOperation();

  ANTLRInputStream input{buffer};
  auto lexer = grammar.makeLexer(&input);
  CommonTokenStream tokens{lexer.get()};

  tokens.fill();

  auto parser = grammar.makeParser(&tokens);
  auto tree   = grammar.getRoot(*parser);

  visitTree(*tree, *parser, grammar);

  listener.endOperation();
}

