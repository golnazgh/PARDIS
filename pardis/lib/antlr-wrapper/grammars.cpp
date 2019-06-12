#include "antlr-plugins.h"
#include "antlr-wrapper.h"
#include "DefinedGrammars.h"

using namespace antlr4;

#include "antlr4-runtime.h"
#include "Token.h"


using namespace llvm;


void
AntlrGrammarInfo::print(llvm::raw_ostream& out,
                        const llvm::ArrayRef<const antlr4::Token*> tokens) const {
  printSource(tokens, out);
}


static bool
isCPreprocessorDirective(const antlr4::Token * token) {
  auto text = token->getText();
  return text.size() > 1 && text[0] == '#';
}


static bool
isBrace(const antlr4::Token * token) {
  auto text = token->getText();
  return text.size() == 1 && (text[0] == '{' || text[0] == '}');
}


static bool
isSemicolon(const antlr4::Token * token) {
  auto text = token->getText();
  return text.size() == 1 && text[0] == ';';
}


void
printCStyleTokens(llvm::raw_ostream& out,
                  const llvm::ArrayRef<const antlr4::Token*> tokens) {
  auto lastTokenStop = INVALID_INDEX;

  for (auto* token : tokens) {
    bool isDirective = isCPreprocessorDirective(token);
    bool isLineEnder = isBrace(token) || isSemicolon(token);
    if (isDirective) {
      out << '\n';
    } else if (lastTokenStop != token->getStartIndex() - 1) {
      out << ' ';
    }
    lastTokenStop = token->getStopIndex();
    out << token->getText();
    if (isDirective || isLineEnder) {
      out << '\n';
    }
  }
}


void
printGenericBracedLanguage(llvm::raw_ostream& out,
                           const llvm::ArrayRef<const antlr4::Token*> tokens) {
  auto lastTokenStop = INVALID_INDEX;

  for (auto* token : tokens) {
    if (lastTokenStop != token->getStartIndex() - 1) {
      out << ' ';
    }
    lastTokenStop = token->getStopIndex();
    out << token->getText();
    if (isBrace(token)) {
      out << '\n';
    }
  }
}


void
printStringOfTokens(llvm::raw_ostream& out,
                    const llvm::ArrayRef<const antlr4::Token*> tokens) {
  for (auto* token : tokens) {
    out << token->getText();
  }
}


GrammarRegistry::GrammarRegistry()
  { }


GrammarRegistry&
GrammarRegistry::get() {
  static GrammarRegistry registry;
  return registry;
}


static RegisterGrammar<CPNFGrammar> CPNF{"cpnf", "Perses form C"};

