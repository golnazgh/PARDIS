
#include "antlr-plugins.h"
#include "antlr-wrapper.h"
#include "reducers.h"

#include <llvm/Support/CommandLine.h>
#include <llvm/Support/ErrorHandling.h>
#include <llvm/Support/FileSystem.h>
#include <llvm/Support/Format.h>
#include <llvm/Support/ManagedStatic.h>
#include <llvm/Support/MemoryBuffer.h>
#include <llvm/Support/PluginLoader.h>
#include <llvm/Support/PrettyStackTrace.h>
#include <llvm/Support/Path.h>
#include <llvm/Support/raw_ostream.h>
#include <llvm/Support/Signals.h>
#include <llvm/Support/Timer.h>

#include <iostream>
#include <stack>
#include <unordered_map>

using namespace llvm;


LLVM_INSTANTIATE_REGISTRY(AntlrGrammarRegistry);


cl::OptionCategory reducerCategory{"external reducer options"};


using GrammarInfo = AntlrGrammarInfo*;

class GrammarNameParser
  : public cl::parser<GrammarInfo>, GrammarRegistry::Listener {
private:
  std::unordered_map<const char *, std::unique_ptr<AntlrGrammarInfo>> grammars;

  void
  checkForGrammars() const {
    for (auto& entry : AntlrGrammarRegistry::entries()) {
      auto* name = entry.getName().data();
      if (grammars.count(name)) {
        continue;
      }
      auto* parser  = const_cast<GrammarNameParser*>(this);
      auto inserted = parser->grammars.emplace(name, entry.instantiate()).first;
      parser->addLiteralOption(name, inserted->second.get(), entry.getDesc());
    }
  }

public:
  GrammarNameParser(cl::Option& o)
    : cl::parser<GrammarInfo>{o} {
    GrammarRegistry::get().addListener(this);
    checkForGrammars();
  }

  void
  grammarAdded(const char* name) override {
    checkForGrammars();
  }
};

static cl::opt<GrammarInfo,false,GrammarNameParser> grammar {
  cl::desc{"Select the type of source file to reduce:"},
  cl::Required,
  cl::cat{reducerCategory},
  cl::init(GrammarInfo{})
};


cl::opt<ReducerMode> reducerMode{
  cl::desc{"Select the reduction approach"},
  cl::values(
    clEnumValN(ReducerMode::PRINT,     "print",
      "print source without reduction"),
    clEnumValN(ReducerMode::PRINTTREE, "printtree",
      "print the parse tree in graphviz format"),
    clEnumValN(ReducerMode::TEST_CHECKER,  "testchecker",
      "run the checker on the original input"),
    clEnumValN(ReducerMode::DD,        "dd",
      "delta debugging of tokens"),
    clEnumValN(ReducerMode::HDD,       "hdd",
      "hierarchical delta debugging"),
    clEnumValN(ReducerMode::QUEUE,    "queue",
      "priority queue and grammar driven test case reduction"),
    clEnumValN(ReducerMode::HDD_FP,    "hdd-fixpoint",
      "hierarchical delta debugging"),
    clEnumValN(ReducerMode::QUEUE_FP, "queue-fixpoint",
      "priority queue based fixpoint reduction")
  ),
  cl::cat{reducerCategory},
  cl::init(ReducerMode::DD)};


static cl::opt<std::string> sourceFilename{"source",
  cl::desc{"Path to the source file to reduce"},
  cl::Required,
  cl::cat{reducerCategory}};


static cl::opt<std::string> outputPath{"o",
  cl::desc{"Output path for the reduced file"},
  cl::cat{reducerCategory},
  cl::init("-")};


static cl::opt<std::string> propertyChecker{"checker",
  cl::desc{"Path to an executable checker of the property of interest"},
  cl::Required,
  cl::cat{reducerCategory}};


static cl::opt<bool> timeReducer{"time",
  cl::desc{"print the time taken for performing reduction."},
  cl::cat{reducerCategory}};


std::unique_ptr<ASTOperation>
getSourceReducer(SourceReducer::Listener& listener,
                 ReducerMode mode,
                 llvm::StringRef checkerPath,
                 llvm::raw_ostream& out) {
  switch (mode) {
    case ReducerMode::PRINT:
      return std::make_unique<AntlrNullReducer>(listener, out);
    case ReducerMode::PRINTTREE:
      return std::make_unique<GraphvizTreePrinter>(listener, out);
    case ReducerMode::TEST_CHECKER:
      return std::make_unique<TestChecker>(listener, checkerPath, out);
    case ReducerMode::DD:
      return std::make_unique<AntlrTokenReducer>(listener, checkerPath, out);
    case ReducerMode::HDD:
      return std::make_unique<AntlrHDDReducer>(listener, checkerPath, out);
    case ReducerMode::QUEUE:
      return std::make_unique<AntlrPriorityQueueReducer>(listener, checkerPath, out);
    case ReducerMode::HDD_FP:
      return std::make_unique<AntlrHDDFixpointReducer>(listener, checkerPath, out);
    case ReducerMode::QUEUE_FP:
      return std::make_unique<AntlrPriorityQueueFixpointReducer>(listener, checkerPath, out);
  }
  llvm::report_fatal_error("Invalid reducer mode");
}


void
warnAboutDebugBuild(llvm::StringRef programName) {
  constexpr unsigned COLUMNS = 80;
  constexpr char SEPARATOR = '*';

  llvm::outs().changeColor(llvm::raw_ostream::Colors::YELLOW, true);
  for (unsigned i = 0; i < COLUMNS; ++i) {
    llvm::outs().write(SEPARATOR);
  }

  llvm::outs().changeColor(llvm::raw_ostream::Colors::RED, true);
  llvm::outs() << "\nWARNING: ";
  llvm::outs().resetColor();
  llvm::outs() << programName << " appears to have been built in debug mode.\n"
               << "Reducing test cases may take longer than normal.\n";

  llvm::outs().changeColor(llvm::raw_ostream::Colors::YELLOW, true);
  for (unsigned i = 0; i < COLUMNS; ++i) {
    llvm::outs().write(SEPARATOR);
  }

  llvm::outs().resetColor();
  llvm::outs() << "\n\n";
}


// TODO: Come up with a way for a single listener to maintain per thread stats.
//  Right now the timer constraints require all timed intervals to not overlap.
//  This prevents independent calculation of overall computation time and the
//  per worker aggregate time. In addition, it creates several data races.
class ReductionAnalyticsListener : public SourceReducer::Listener {
private:
  struct TestCounts {
    uint64_t total;
    uint64_t successful;
    uint64_t skipped;
    uint64_t redundant;

    TestCounts()
      : total{0},
        successful{0},
        skipped{0},
        redundant{0}
        { }
  };

  TimerGroup taskTiming{"Arborist Testing", "Arborist Testing"};
  TimerGroup processTiming{"Arborist Process", "Arborist Process"};
  Timer parsingTimer{"Parse Time", "Parse Time", processTiming};
  Timer reducingTimer{"Reducer Time", "Reducer Time", processTiming};
  Timer testingTimer{"Testing Time", "Testing Time",  taskTiming};
  Timer fragmentTimer{"Fragment Time", "Fragment Time",  processTiming};
  Timer totalTimer{"Whole Process Time", "Whole Process Time"};

  const char* testStrategy = nullptr;
  llvm::DenseMap<const char*, TestCounts> testCounts;
  TestCounts totalCounts;

  testshrinker::TreeSize startingSize;
  testshrinker::TreeSize endingSize;

  size_t progressReportCount = 0;

  void
  printSize(const char* label, uint64_t reduced, uint64_t original) const {
      double percent = 100 * reduced / double(original);
      llvm::outs() << "Size (" << label << "): "
                   << reduced << " / " << original
                   << llvm::format(" (%f%%)\n", percent);
  }

  void
  printCounts(const char* name, const TestCounts& counts) const {
    llvm::outs() << "Number of ";
    if (name) {
      llvm::outs() << name << " ";
    }
    llvm::outs() << "tests: " << counts.total
                 << " successful: " << counts.successful
                 << " skipped: " << counts.skipped
                 << " redundant: " << counts.redundant
                 << "\n";
  }

public:
  void
  beginOperation() override {
    parsingTimer.startTimer();
    totalTimer.startTimer();
  }
  void
  endOperation() override {
    totalTimer.stopTimer();
    llvm::outs() << "********************************************************\n";

    for (const auto& nameCountPair : testCounts) {
      printCounts(nameCountPair.first, nameCountPair.second);
    }

    printCounts("Total", totalCounts);

    printSize("nodes",  endingSize.nodes,  startingSize.nodes);
    printSize("tokens", endingSize.tokens, startingSize.tokens);
    printSize("bytes",  endingSize.bytes,  startingSize.bytes);

    llvm::outs() << "********************************************************\n"
                 << "\n";
  }

  void
  printProgressReport(SourceReducer::ShrinkerTree& tree) override {
    auto currentSize = getSize(tree);

    llvm::outs() << "********************************************************\n";
    llvm::outs() << "Progress Report " << progressReportCount << "\n";

    for (const auto& nameCountPair : testCounts) {
      printCounts(nameCountPair.first, nameCountPair.second);
    }

    printSize("nodes",  currentSize.nodes,  startingSize.nodes);
    printSize("tokens", currentSize.tokens, startingSize.tokens);
    printSize("bytes",  currentSize.bytes,  startingSize.bytes);

    taskTiming.print(llvm::outs());
    processTiming.print(llvm::outs());

    llvm::outs() << "********************************************************\n"
                 << "\n";
    ++progressReportCount;
  }

  void
  beginReductionPhase(SourceReducer::ShrinkerTree& tree) override {
    parsingTimer.stopTimer();
    startingSize = getSize(tree);
    reducingTimer.startTimer();
  }
  void
  endReductionPhase(SourceReducer::ShrinkerTree& tree) override {
    reducingTimer.stopTimer();
    endingSize = getSize(tree);
  }

  void
  setTestStrategy(const char* strategyName) override {
    testStrategy = strategyName;
  }

  void
  beginTest() override {
    testingTimer.startTimer();
  }

  void
  endTestEarly() override {
    testingTimer.stopTimer();

    auto& counts = testCounts[testStrategy];
    counts.total += 1;
    counts.skipped +=1;
    totalCounts.total += 1;
    totalCounts.skipped += 1;
  }

  void
  endTest(bool testSucceeded, SourceReducer::ShrinkerTree const& tree) override {
    testingTimer.stopTimer();

    auto& counts = testCounts[testStrategy];
    counts.total += 1;
    totalCounts.total += 1;
    if (testSucceeded) {
      counts.successful += 1;
      totalCounts.successful += 1;
    }
  }

  void
  countRedundant(uint64_t numRedundant) {
    auto& counts = testCounts[testStrategy];
    counts.redundant += numRedundant;
    totalCounts.redundant += numRedundant;
  }
};


int
main(int argc, const char* argv[]) {
  sys::PrintStackTraceOnErrorSignal(argv[0]);
  llvm::PrettyStackTraceProgram prettyStack{argc, argv};
  llvm_shutdown_obj shutdown;

  cl::HideUnrelatedOptions(reducerCategory);
  cl::ParseCommandLineOptions(argc, argv);

#if !defined(NDEBUG) || defined(LLVM_ENABLE_ASSERTIONS)
  warnAboutDebugBuild(argv[0]);
#endif

  auto fileOrError = llvm::MemoryBuffer::getFileOrSTDIN(sourceFilename);
  if (!fileOrError) {
    llvm::report_fatal_error("Unable to open source file.");
  }

  if (!llvm::sys::fs::can_execute(propertyChecker)) {
    llvm::report_fatal_error("Unable to execute property checker.");
  }

  // If the default output path is given, just redirect the reduced file to
  // the standard output. Otherwise, direct the output to the requested file.
  llvm::raw_ostream* outputFileStream = &llvm::outs();
  std::unique_ptr<llvm::raw_fd_ostream> outfile;
  if (outputPath != "-") {
    std::error_code error;
    outfile =
      std::make_unique<llvm::raw_fd_ostream>(outputPath, error, sys::fs::F_Text);
    if (error) {
      llvm::report_fatal_error("Unable to open output file.");
    }
    outputFileStream = outfile.get();
  }

  auto listener = (timeReducer || (reducerMode == ReducerMode::TEST_CHECKER))
    ? std::make_unique<ReductionAnalyticsListener>()
    : std::make_unique<SourceReducer::Listener>();

  auto reducer = getSourceReducer(*listener, reducerMode, propertyChecker,
                                  *outputFileStream);

  (*reducer)(*grammar, fileOrError->get()->getBuffer());

  return 0;
}

