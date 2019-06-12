
#ifndef DEFINED_GRAMMARS
#define DEFINED_GRAMMARS


class CPNFGrammar : public AntlrGrammarInfo {
public:
  CPNFGrammar()
    : AntlrGrammarInfo{"", true}
      { }

  std::unique_ptr<antlr4::Lexer>
  makeLexer(antlr4::CharStream* stream) const override;

  std::unique_ptr<antlr4::Parser>
  makeParser(antlr4::TokenStream* stream) const override;

  antlr4::tree::ParseTree*
  getRoot(antlr4::Parser& parser) const override;

  void
  print(llvm::raw_ostream& out,
        const llvm::ArrayRef<const antlr4::Token*> tokens) const override;
};


#endif
