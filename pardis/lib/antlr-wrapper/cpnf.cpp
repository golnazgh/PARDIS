#include "antlr-plugins.h"
#include "antlr-wrapper.h"

#include "antlr4-runtime.h"
#include "RuleContextWithAltNum.h"

#include "CPNFLexer.h"
#include "CPNFParser.h"
#include "CPNFVisitor.h"
#include "CPNFBaseVisitor.h"

#include "DefinedGrammars.h"

#include <llvm/ADT/DenseMap.h>
#include <llvm/ADT/DenseSet.h>
#include <llvm/ADT/StringMap.h>


using namespace antlr4;
using namespace llvm;


using Symbol      = std::pair<const antlr4::Token*, unsigned>;
using SymbolSet   = llvm::SmallVector<Symbol,2>;
using SymbolScope = llvm::StringMap<SymbolSet>;


void
printCStyleTokens(llvm::raw_ostream& out,
                  const llvm::ArrayRef<const antlr4::Token*> tokens);

std::unique_ptr<antlr4::Lexer>
CPNFGrammar::makeLexer(antlr4::CharStream* stream) const {
  return std::make_unique<antlr_CPNF::CLexer>(stream);
}
std::unique_ptr<antlr4::Parser>
CPNFGrammar::makeParser(antlr4::TokenStream* stream) const {
  return std::make_unique<antlr_CPNF::CParser>(stream);
}
antlr4::tree::ParseTree*
CPNFGrammar::getRoot(antlr4::Parser& parser) const {
  return static_cast<antlr_CPNF::CParser&>(parser).pnf_start();
}
void
CPNFGrammar::print(llvm::raw_ostream& out,
    const llvm::ArrayRef<const antlr4::Token*> tokens) const {
  printCStyleTokens(out, tokens);
}
