
#ifndef ANTLR_WRAPPER_H
#define ANTLR_WRAPPER_H


#include <llvm/ADT/DenseMap.h>
#include <llvm/ADT/StringSet.h>
#include <llvm/ADT/SmallPtrSet.h>
#include <llvm/ADT/SmallVector.h>
#include <llvm/ADT/SparseBitVector.h>
#include <llvm/ADT/StringRef.h>
#include <llvm/ADT/ArrayRef.h>
#include <llvm/Support/PointerLikeTypeTraits.h>
#include <llvm/Support/Registry.h>

#include <functional>
#include <unordered_set>
#include <vector>

#include "CommonToken.h"

#include "HierarchicalTestCaseShrinker.h"

namespace antlr4 {

  namespace tree{
    class ParseTree;
  }

  class CharStream;
  class Lexer;
  class Parser;
  class Token;
  class TokenStream;
  class CommonToken;
  class CommonTokenStream;
  class BailErrorStrategy;
  class ParseCancellationException;
  class Token;
}

namespace llvm {
  class raw_ostream;

  // Including a specialization for the incomplete classes here seems necessary
  // for many of the LLVM data structures like SmallPtrSet to work after
  // version 3.7
  template <>
  struct PointerLikeTypeTraits<antlr4::tree::ParseTree*> {
    using Tree = antlr4::tree::ParseTree*;
    static inline void *getAsVoidPointer(Tree p) { return p; }
    static inline Tree getFromVoidPointer(void *p) { return static_cast<Tree>(p); }
    enum { NumLowBitsAvailable = detail::ConstantLog2<alignof(uint64_t)>::value };
  };
}


class AntlrGrammarInfo;


antlr4::tree::ParseTree*
asTree(antlr4::tree::ParseTree* tree);

void dumpAST(llvm::raw_ostream& out, antlr4::tree::ParseTree& tree);
void dumpAST(llvm::raw_ostream& out, antlr4::tree::ParseTree& tree);

std::pair<unsigned,unsigned> getTokenRange(const antlr4::Token* token);

void
printSource(const llvm::ArrayRef<const antlr4::Token*> tokens,
            llvm::raw_ostream& out);


testshrinker::Tree<const antlr4::tree::ParseTree*>
createReducerTree(const antlr4::tree::ParseTree& tree,
                  AntlrGrammarInfo const& grammar);

void
flattenRecursion(testshrinker::Tree<const antlr4::tree::ParseTree*>& tree,
                 antlr4::Parser& parser);

void
coarseHDDFlattening(testshrinker::Tree<const antlr4::tree::ParseTree*>& tree,
                    antlr4::Parser& parser);

void
removeRedundantNodes(testshrinker::Tree<const antlr4::tree::ParseTree*>& tree);

testshrinker::TreeSize
getSize(const testshrinker::Tree<const antlr4::tree::ParseTree*>& tree);


using TreeNode = testshrinker::TreeNode<const antlr4::tree::ParseTree*>;

template<typename Node>
using NodeRangeList =
  std::pair<llvm::SmallVector<Node*,4>, llvm::SmallVector<size_t,4>>;

llvm::DenseMap<const TreeNode*,NodeRangeList<TreeNode>>
mapTreesToSimilarSubtrees(const testshrinker::Tree<const antlr4::tree::ParseTree*>& tree);

llvm::DenseMap<const TreeNode*,llvm::SmallVector<TreeNode*,4>>
mapListElementsToSublists(const testshrinker::Tree<const antlr4::tree::ParseTree*>& tree);

std::vector<const antlr4::Token*>
getTokensReplacing(const testshrinker::Tree<const antlr4::tree::ParseTree*>& tree,
                   const llvm::DenseMap<const TreeNode*,
                                        antlr4::CommonToken*>& replacements);

testshrinker::TreeSize
getSize(const antlr4::tree::ParseTree& tree);

std::vector<antlr4::tree::ParseTree*>
getTerminalNodes(const antlr4::tree::ParseTree& tree);

const antlr4::Token*
getToken(const antlr4::tree::ParseTree* tree);

std::vector<const antlr4::Token*>
getTokens(const antlr4::tree::ParseTree& tree);

std::vector<const antlr4::Token*>
getTokensSkipping(const antlr4::tree::ParseTree& tree,
                  const llvm::SmallPtrSetImpl<const antlr4::tree::ParseTree*>& toSkip);

llvm::SmallVector<const antlr4::Token*,12>
getKTokensSkipping(size_t count,
                   const antlr4::tree::ParseTree& tree,
                   const llvm::SmallPtrSetImpl<const antlr4::tree::ParseTree*>& toSkip);

std::vector<const antlr4::Token*>
getTokensReplacing(const antlr4::tree::ParseTree& tree,
                   const llvm::DenseMap<antlr4::tree::ParseTree*,
                                        antlr4::tree::ParseTree*>& replacements);

std::vector<const antlr4::Token*>
getTokensReplacing(const antlr4::tree::ParseTree& tree,
                   const llvm::DenseMap<antlr4::tree::ParseTree*,
                                        antlr4::CommonToken*>& replacements);

std::unique_ptr<antlr4::CommonToken> getZeroToken();

const antlr4::tree::ParseTree*
getTokenTree(antlr4::Parser& parser, const char* str);

std::unordered_set<std::string>
getUniqueTokenStrings(const antlr4::tree::ParseTree& tree);

std::unordered_set<std::string>
getUniqueTokenStrings(llvm::ArrayRef<antlr4::tree::ParseTree*> tree);

size_t getTokenIndex(const antlr4::Token* token);

void
applyReplacements(const antlr4::tree::ParseTree& tree,
                  const llvm::DenseMap<antlr4::tree::ParseTree*,
                                       antlr4::CommonToken*>& replacements,
                  antlr4::Parser& parser);

llvm::DenseMap<const antlr4::tree::ParseTree*,llvm::SparseBitVector<>>
mapTreesToTokens(const antlr4::tree::ParseTree& tree,
                 llvm::ArrayRef<std::string> tokens);

llvm::DenseMap<const antlr4::tree::ParseTree*,antlr4::tree::ParseTree*>
mapTreesToParents(const antlr4::tree::ParseTree& tree);

using DenseRangeList =
  std::pair<llvm::SmallVector<antlr4::tree::ParseTree*,4>,
            llvm::SmallVector<size_t,4>>;

llvm::DenseMap<const antlr4::tree::ParseTree*,DenseRangeList>
mapTreesToSimilarSubtrees(const antlr4::tree::ParseTree& tree);

antlr4::tree::ParseTree*
getParent(antlr4::tree::ParseTree* tree);

std::vector<antlr4::tree::ParseTree*>
collectChildren(llvm::ArrayRef<const antlr4::tree::ParseTree*> parents);

std::vector<antlr4::tree::ParseTree*>
collectChildren(const antlr4::tree::ParseTree& root);

std::vector<antlr4::tree::ParseTree*>
collectRules(const antlr4::tree::ParseTree* tree, unsigned ruleIndex);

llvm::MutableArrayRef<antlr4::tree::ParseTree*>
getSiblingList(const antlr4::tree::ParseTree& node);

void flattenRecursion(antlr4::tree::ParseTree& root);

void
removeRedundantNodes(antlr4::tree::ParseTree& root,
                     AntlrGrammarInfo const& grammar);

void replaceWith(antlr4::tree::ParseTree& node, antlr4::tree::ParseTree& replacement);

bool isOnlyChild(const antlr4::tree::ParseTree& node);

bool endsDerivationChain(const antlr4::tree::ParseTree& node);

std::vector<std::string>
getLiteralNames(const antlr4::Parser &parser);

std::vector<std::string>
getRuleNames(const antlr4::Parser &parser);

std::vector<antlr4::CommonToken>
getMinimalReplacementTokens(const AntlrGrammarInfo& grammar);

std::pair<const antlr4::tree::ParseTree*, unsigned>
getCommonAncestor(const antlr4::tree::ParseTree& first,
                  const antlr4::tree::ParseTree& second);

const antlr4::tree::ParseTree*
getNthAncestor(const antlr4::tree::ParseTree* tree, unsigned n);

const antlr4::tree::ParseTree*
getAncestorBelow(const antlr4::tree::ParseTree* tree,
                 const antlr4::tree::ParseTree* ancestor);

std::pair<bool,unsigned>
getRuleIndex(const antlr4::tree::ParseTree* tree);

std::pair<bool,unsigned>
getAlternativeIndex(const antlr4::tree::ParseTree* tree);

std::string
getText(antlr4::tree::ParseTree* tree);

std::string
getText(const antlr4::Token* token);

void
printGraphvizTree(llvm::raw_ostream& out,
                  antlr4::tree::ParseTree& tree,
                  antlr4::Parser& parser);

class ASTOperation {
public:
  class Listener {
  public:
    Listener() = default;
    virtual ~Listener() = default;
    Listener(const Listener& other) = delete;
    Listener& operator=(const Listener& other) = delete;

    virtual void beginOperation() {}
    virtual void endOperation() {}
  };

private:
  ASTOperation::Listener& listener;

public:
  explicit ASTOperation(Listener& listener)
    : listener{listener}
      { }

  virtual ~ASTOperation() = default;
  ASTOperation(const ASTOperation& other) = delete;
  ASTOperation& operator=(const ASTOperation& other) = delete;

  void operator()(AntlrGrammarInfo& grammar, llvm::StringRef file);

private:
  virtual void visitTree(antlr4::tree::ParseTree& tree,
                         antlr4::Parser& parser,
                         AntlrGrammarInfo& info) = 0;
};


#endif
