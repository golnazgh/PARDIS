
#ifndef REDUCERS_H
#define REDUCERS_H

#include "HierarchicalTestCaseShrinker.h"
#include "antlr-wrapper.h"


#include <llvm/ADT/SmallString.h>
#include <llvm/Support/raw_ostream.h>


enum class ReducerMode {
  PRINT,
  PRINTTREE,
  TEST_CHECKER,
  DD,
  HDD,
  QUEUE,
  HDD_FP,
  QUEUE_FP,
};


class SourceReducer : public ASTOperation {
public:
  using ShrinkerTree = testshrinker::Tree<const antlr4::tree::ParseTree*>;

  // The SourceReducer::Listener extends an ASTOperationListener such that
  // the methods of SourceReducer::Listener will be invoked following the
  // pattern below:
  //
  // beginOperation()
  //   beginReductionPhase()    -- This indentation block may not occur (?)
  //     (                      -- This indentation block repeats (*)
  //       beginFragmentCheck() -- This indentation block repeats (*)
  //       endFragmentCheck()
  //     )
  //     beginTest()
  //     endTest()
  //   endReductionPhase()
  // endOperation()
  class Listener : public ASTOperation::Listener {
  public:
    virtual void beginReductionPhase(ShrinkerTree& tree) {}
    virtual void endReductionPhase(ShrinkerTree& tree) {}

    virtual void setTestStrategy(const char* strategyName) {}

    virtual void beginTest() {}
    virtual void endTestEarly() {}
    virtual void endTest(bool testSuccessful, SourceReducer::ShrinkerTree const& tree) {}

    virtual void countRedundant(uint64_t numRedundant) {}

    virtual void printProgressReport(ShrinkerTree& tree) {}
  };


  SourceReducer(SourceReducer::Listener& listener)
    : ASTOperation{listener},
      listener{listener}
      { }

  Listener& listener;

private:
  void visitTree(antlr4::tree::ParseTree& tree,
                 antlr4::Parser& parser,
                 AntlrGrammarInfo& info) override final;
  virtual void reduce(ShrinkerTree& tree,
                      antlr4::Parser& parser,
                      AntlrGrammarInfo const & grammar) = 0;
};


class AntlrNullReducer : public SourceReducer {
  llvm::raw_ostream& out;

public:
  AntlrNullReducer(Listener& listener, llvm::raw_ostream& out)
    : SourceReducer{listener},
      out{out}
      { }

  void reduce(ShrinkerTree& tree,
              antlr4::Parser& parser,
              AntlrGrammarInfo const & grammar) override;
};


class GraphvizTreePrinter : public SourceReducer {
  llvm::raw_ostream& out;

public:
  GraphvizTreePrinter(Listener& listener, llvm::raw_ostream& out)
    : SourceReducer{listener},
      out{out}
      { }

  void reduce(ShrinkerTree& tree,
              antlr4::Parser& parser,
              AntlrGrammarInfo const & grammar) override;
};


class TestChecker : public SourceReducer {
  llvm::StringRef propertyChecker;
  llvm::raw_ostream& out;

public:
  TestChecker(Listener& listener,
              llvm::StringRef propertyChecker,
              llvm::raw_ostream& out)
    : SourceReducer{listener},
      propertyChecker{propertyChecker},
      out{out}
      { }

  void reduce(ShrinkerTree& tree,
              antlr4::Parser& parser,
              AntlrGrammarInfo const & grammar) override;
};


class AntlrTokenReducer : public SourceReducer {
  llvm::StringRef propertyChecker;
  llvm::raw_ostream& out;

public:
  AntlrTokenReducer(Listener& listener,
                    llvm::StringRef propertyChecker,
                    llvm::raw_ostream& out)
    : SourceReducer{listener},
      propertyChecker{propertyChecker},
      out{out}
      { }

  void reduce(ShrinkerTree& tree,
              antlr4::Parser& parser,
              AntlrGrammarInfo const & grammar) override;
};


class AntlrHDDReducer : public SourceReducer {
  llvm::StringRef propertyChecker;
  llvm::raw_ostream& out;

public:
  AntlrHDDReducer(Listener& listener,
                  llvm::StringRef propertyChecker,
                  llvm::raw_ostream& out)
    : SourceReducer{listener},
      propertyChecker{propertyChecker},
      out{out}
      { }

  void reduce(ShrinkerTree& tree,
              antlr4::Parser& parser,
              AntlrGrammarInfo const & grammar) override;
};


class AntlrPriorityQueueReducer : public SourceReducer {
  llvm::StringRef propertyChecker;
  llvm::raw_ostream& out;

public:
  AntlrPriorityQueueReducer(Listener& listener,
                       llvm::StringRef propertyChecker,
                       llvm::raw_ostream& out)
    : SourceReducer{listener},
      propertyChecker{propertyChecker},
      out{out}
      { }

  void reduce(ShrinkerTree& tree,
              antlr4::Parser& parser,
              AntlrGrammarInfo const & grammar) override;
};


class AntlrPriorityQueueFixpointReducer : public SourceReducer {
  llvm::StringRef propertyChecker;
  llvm::raw_ostream& out;

public:
  AntlrPriorityQueueFixpointReducer(Listener& listener,
                                    llvm::StringRef propertyChecker,
                                    llvm::raw_ostream& out)
    : SourceReducer{listener},
      propertyChecker{propertyChecker},
      out{out}
      { }

  void reduce(ShrinkerTree& tree,
              antlr4::Parser& parser,
              AntlrGrammarInfo const & grammar) override;
};


class AntlrHDDFixpointReducer : public SourceReducer {
  llvm::StringRef propertyChecker;
  llvm::raw_ostream& out;

public:
  AntlrHDDFixpointReducer(Listener& listener,
                          llvm::StringRef propertyChecker,
                          llvm::raw_ostream& out)
    : SourceReducer{listener},
      propertyChecker{propertyChecker},
      out{out}
      { }

  void reduce(ShrinkerTree& tree,
              antlr4::Parser& parser,
              AntlrGrammarInfo const & grammar) override;
};


#endif
