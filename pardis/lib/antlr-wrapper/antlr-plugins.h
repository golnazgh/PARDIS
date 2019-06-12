
#ifndef ANTLR_PLUGINS_H
#define ANTLR_PLUGINS_H


#include <llvm/ADT/StringRef.h>
#include <llvm/ADT/ArrayRef.h>
#include <llvm/Support/Registry.h>
#include <llvm/Support/raw_ostream.h>

#include <vector>


namespace antlr4 {

  namespace tree{
    class ParseTree;
  }

  class CharStream;
  class Lexer;
  class Parser;
  class Token;
  class TokenStream;
}


class AntlrGrammarInfo {
public:
  const llvm::StringRef license;

  // TODO: Generalize this for custom pretty printers
  const bool printWhitespace;

  AntlrGrammarInfo(llvm::StringRef license, bool printWhitespace)
    : license{license},
      printWhitespace{printWhitespace}
      { }

  virtual std::unique_ptr<antlr4::Lexer> makeLexer(antlr4::CharStream*) const = 0;
  virtual std::unique_ptr<antlr4::Parser> makeParser(antlr4::TokenStream*) const = 0;
  virtual antlr4::tree::ParseTree* getRoot(antlr4::Parser&) const = 0;
  // Temporary kludge. Make this pure virtual.
  virtual void print(llvm::raw_ostream& out,
                     const llvm::ArrayRef<const antlr4::Token*> tokens) const;
};


using AntlrGrammarRegistry = llvm::Registry<AntlrGrammarInfo>;


class GrammarRegistry {
public:
  class Listener {
  public:
    virtual void grammarAdded(const char* name) = 0;
  };

private:
  std::vector<Listener*> listeners;
  GrammarRegistry();
public:
  static GrammarRegistry& get();

  void
  grammarAdded(const char* name) {
    for (auto* listener : listeners) {
      listener->grammarAdded(name);
    }
  }
  void
  addListener(Listener* listener) {
    listeners.push_back(listener);
  }
};


template <typename T>
class RegisterGrammar {
private:
  AntlrGrammarRegistry::Add<T> entry;
  static void grammarAdded();

public:
  RegisterGrammar(const char* name, const char* description)
    : entry{name, description} {
    GrammarRegistry::get().grammarAdded(name);
  }
};


#endif
