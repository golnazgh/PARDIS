
#ifndef TEST_CASE_SHRINKER_H
#define TEST_CASE_SHRINKER_H


#include <atomic>
#include <condition_variable>
#include <deque>
#include <limits>
#include <mutex>
#include <numeric>
#include <set>
#include <thread>
#include "llvm/ADT/DenseMap.h"
#include "llvm/ADT/SparseBitVector.h"


namespace testshrink {


using Atom        = unsigned;
using AtomSet     = llvm::SparseBitVector<128>;
using AtomSetList = std::vector<AtomSet>;


}


namespace std {

template<>
struct iterator_traits<testshrink::AtomSet::SparseBitVectorIterator> {
  using iterator_category = std::forward_iterator_tag;
  using value_type        = unsigned;
  using difference_type   = ptrdiff_t;
};

}


namespace testshrink {


struct CompareAtomSets {
  bool
  operator()(const AtomSet &lhs, const AtomSet &rhs) const {
    return std::lexicographical_compare(lhs.begin(), lhs.end(),
                                        rhs.begin(), rhs.end());
  }
};


// Sets to minimize with respect to a property phi are specified through the
// TestRunner class. When the property phi holds for a configuration, the
// `runTest` method should return Outcome::FOUND, otherwise it should return
// Outcome::NOT_FOUND.
class TestRunner {
public:
  enum class Outcome { FOUND, NOT_FOUND };

  virtual ~TestRunner() = default;

  Outcome
  run(AtomSet const& configuration) {
    return runImpl(configuration);
  }

private:
  virtual Outcome runImpl(AtomSet const& configuration) = 0;
};


class TestCache {
public:
  virtual ~TestCache() = default;

  bool
  contains(const AtomSet& atomSet) const {
    return containsImpl(atomSet);
  }

  // Returns true if the item was added, i.e. *not* already present.
  bool
  add(const AtomSet& atomSet) {
    return addImpl(atomSet);
  }

private:
  virtual bool containsImpl(AtomSet const& configuration) const = 0;
  virtual bool addImpl(AtomSet const& configuration) = 0;
};


class DefaultTestCache : public TestCache {
public:
  DefaultTestCache()
    : failedTestsCache{}
      { }

private:
  std::set<AtomSet,CompareAtomSets> failedTestsCache;

  bool
  containsImpl(AtomSet const& configuration) const override {
    return failedTestsCache.count(configuration);
  }

  bool
  addImpl(AtomSet const& configuration) override {
    return failedTestsCache.insert(configuration).second;
  }
};


// Specify the order in which to search the subsets and complements for
// solutions. The list of subsets is presented in forward/ascending order.
class Prioritizer {
public:
  virtual ~Prioritizer() = default;

  void
  rank(const AtomSetList& subsets,
       std::vector<unsigned>& subsetOrder,
       std::vector<unsigned>& complementOrder) {
    rankImpl(subsets, subsetOrder, complementOrder);
  }

private:
  virtual void
  rankImpl(const AtomSetList& subsets,
           std::vector<unsigned>& subsetOrder,
           std::vector<unsigned>& complementOrder) = 0;
};


class InSequencePrioritizer : public Prioritizer {
public:
  InSequencePrioritizer()
    : InSequencePrioritizer(false, true)
      { }

  InSequencePrioritizer(bool reverseSubsets, bool reverseComplements)
    : reverseSubsets{reverseSubsets},
      reverseComplements{reverseComplements}
      { }

private:
  bool reverseSubsets;
  bool reverseComplements;

  void
  rankImpl(const AtomSetList& subsets,
           std::vector<unsigned>& subsetOrder,
           std::vector<unsigned>& complementOrder) override {
    subsetOrder.resize(subsets.size());
    std::iota(subsetOrder.begin(), subsetOrder.end(), 0);
    complementOrder = subsetOrder;
    if (reverseSubsets) {
      std::reverse(subsetOrder.begin(), subsetOrder.end());
    }
    if (reverseComplements) {
      std::reverse(complementOrder.begin(), complementOrder.end());
    }
  }
};


class Splitter {
public:
  virtual ~Splitter() = default;

  void
  split(const AtomSet& atomSet, AtomSetList& atomSetList) {
    splitImpl(atomSet, atomSetList);
  }

private:
  virtual void
  splitImpl(const AtomSet& atomSet, AtomSetList& atomSetList) = 0;
};


class HalvingSplitter : public Splitter {
private:
  void
  splitImpl(const AtomSet& atomSet, AtomSetList& atomSetList) override {
    AtomSet lhs, rhs;
    unsigned idx = 0, n = atomSet.count() / 2;
    for (auto it = atomSet.begin(), ie = atomSet.end(); it != ie; ++it, ++idx) {
      ((idx < n) ? lhs : rhs).set(*it);
    }
    if (!lhs.empty()) {
      atomSetList.push_back(lhs);
    }
    if (!rhs.empty()) {
      atomSetList.push_back(rhs);
    }
  }
};


class GranularitySearcher {
public:
  virtual ~GranularitySearcher() = default;

  void
  search(AtomSet& atomSet,
         llvm::ArrayRef<AtomSet> subsets,
         llvm::ArrayRef<unsigned> subsetOrder,
         llvm::ArrayRef<unsigned> complementOrder) {
    searchImpl(atomSet, subsets, subsetOrder, complementOrder);
  }

  uint64_t
  getRedundantTests() {
    return getRedundantTestsImpl();
  }

private:
  virtual void
  searchImpl(AtomSet& atomSet,
             llvm::ArrayRef<AtomSet> subsets,
             llvm::ArrayRef<unsigned> subsetOrder,
             llvm::ArrayRef<unsigned> complementOrder) = 0;

  virtual uint64_t getRedundantTestsImpl() = 0;
};


AtomSet
shrinkTestCase(AtomSet atomSet,
               TestRunner& runner,
               Prioritizer& prioritizer,
               Splitter& splitter);


AtomSet shrinkTestCase(AtomSet atomSet, TestRunner& runner);


enum class RevisitPolicy : uint8_t {
  ORIGINAL_DD,
  ONE_PASS
};


class SearchExecutor : public GranularitySearcher {
public:
  SearchExecutor(TestRunner& checker,
                 TestCache& cache,
                 RevisitPolicy revisit=RevisitPolicy::ORIGINAL_DD)
    : SearchExecutor{checker, cache, false, revisit}
      { }

  SearchExecutor(TestRunner& checker,
                 TestCache& cache,
                 bool complementsFirst,
                 RevisitPolicy revisit)
    : checker{checker},
      cache{cache},
      complementsFirst{complementsFirst},
      revisit{revisit},
      redundantTestCount{0},
      testCount{0}
      { }

  void
  searchImpl(AtomSet& atomSet,
         llvm::ArrayRef<AtomSet> subsets,
         llvm::ArrayRef<unsigned> subsetOrder,
         llvm::ArrayRef<unsigned> complementOrder) override {
    if (complementsFirst) {
      findComplements(atomSet, subsets, complementOrder);
      findSubset(atomSet, subsets, subsetOrder);
    } else {
      findSubset(atomSet, subsets, subsetOrder);
      findComplements(atomSet, subsets, complementOrder);
    }
  }

private:
  TestRunner& checker;
  TestCache& cache;
  bool complementsFirst;
  RevisitPolicy revisit;
  uint64_t redundantTestCount;
  uint64_t testCount;

  bool
  getTestResult(const AtomSet& atomSet) {
    if (!cache.add(atomSet)) {
      return false;
    }
    ++testCount;
    return TestRunner::Outcome::FOUND == checker.run(atomSet);
  }

  bool
  findSubset(AtomSet& atomSet,
             llvm::ArrayRef<AtomSet> subsets,
             llvm::ArrayRef<unsigned> subsetOrder) {
    testCount = 0;
    auto subsetFound = std::find_if(subsetOrder.begin(), subsetOrder.end(),
      [&subsets, &atomSet, this] (auto index) {
      auto& subset = subsets[index];
      return atomSet.contains(subset) && this->getTestResult(subset);
    });
    if (subsetFound != subsetOrder.end()) {
      redundantTestCount += std::max(testCount - 1, uint64_t{0});
      atomSet = subsets[*subsetFound];
    }
    return subsetFound != subsetOrder.end();
  }


  void
  findComplements(AtomSet& atomSet,
                  llvm::ArrayRef<AtomSet> subsets,
                  llvm::ArrayRef<unsigned> complementOrder) {
    llvm::SparseBitVector<> worklist;
    for (unsigned i = 0, e = subsets.size(); i < e; ++i) {
      worklist.set(i);
    }
    bool changed;
    size_t lastChanged = -1;
    do {
      changed = false;
      testCount = 0;
      for (auto index : worklist) {
        if (!changed && lastChanged < index) {
          break;
        }
        const auto& subset = subsets[complementOrder[index]];
        if (getTestResult(atomSet - subset)) {
          changed = true;
          lastChanged = index;
          redundantTestCount += std::max(testCount - 1, uint64_t{0});
          testCount = 0;
          atomSet.intersectWithComplement(subset);
          worklist.reset(index);
        }
      }
    } while (changed && revisit == RevisitPolicy::ORIGINAL_DD);
  }

  virtual uint64_t
  getRedundantTestsImpl() {
    return redundantTestCount;
  }
};


class TestShrinker {
public:
  virtual ~TestShrinker() = default;

  AtomSet
  shrinkTestCase(AtomSet atomSet, TestRunner& checker) {
    return shrinkTestCaseImpl(atomSet, checker);
  }

  uint64_t
  getRedundantTests() {
    return getRedundantTestsImpl();
  }

private:
  virtual AtomSet shrinkTestCaseImpl(AtomSet& atomSet, TestRunner& checker) = 0;

  virtual uint64_t getRedundantTestsImpl() { return 0; }
};


class HierarchicalShrinker : public TestShrinker {
public:
  HierarchicalShrinker(GranularitySearcher& searcher,
                       Prioritizer& prioritizer,
                       Splitter& splitter)
    : searcher{searcher},
      prioritizer{prioritizer},
      splitter{splitter},
      redundantTestCount{0}
      { }

private:
  GranularitySearcher& searcher;
  Prioritizer& prioritizer;
  Splitter& splitter;
  uint64_t redundantTestCount;

  AtomSet
  shrinkTestCaseImpl(AtomSet& atomSet, TestRunner& checker) override {
    AtomSetList subsets = { atomSet };

    // If the checker succeeds on an empty set, short-circuit everything else.
    if (TestRunner::Outcome::FOUND == checker.run(AtomSet{})) {
      return AtomSet{};
    }

    // The outer loop controls the refinement steps of the algorithm
    while (true) {
      if (atomSet.count() == 1) {
        break;
      }

      AtomSetList refinedSubsets;
      for (auto& atomSet : subsets) {
        splitter.split(atomSet, refinedSubsets);
      }
      if (refinedSubsets.size() == subsets.size()) {
        break;
      }
      std::swap(refinedSubsets, subsets);

      std::vector<unsigned> subsetOrder;
      std::vector<unsigned> complementOrder;
      prioritizer.rank(subsets, subsetOrder, complementOrder);

      searcher.search(atomSet, subsets, subsetOrder, complementOrder);
      auto toRemove = std::remove_if(subsets.begin(), subsets.end(),
        [atomSet] (const auto& subset) { return !subset.intersects(atomSet);
      });
      subsets.erase(toRemove, subsets.end());
    }

    redundantTestCount += searcher.getRedundantTests();
    return atomSet;
  }

  uint64_t getRedundantTestsImpl() override { return redundantTestCount; }
};


class OwningHierarchicalShrinkerWrapper : public TestShrinker {
public:
  OwningHierarchicalShrinkerWrapper(
    std::unique_ptr<GranularitySearcher> searcher,
    std::unique_ptr<Prioritizer> prioritizer,
    std::unique_ptr<Splitter> splitter
  )
    : searcher{std::move(searcher)},
      prioritizer{std::move(prioritizer)},
      splitter{std::move(splitter)},
      shrinker{*this->searcher, *this->prioritizer, *this->splitter}
      { }
private:
  std::unique_ptr<GranularitySearcher> searcher;
  std::unique_ptr<Prioritizer> prioritizer;
  std::unique_ptr<Splitter> splitter;
  HierarchicalShrinker shrinker;

  AtomSet
  shrinkTestCaseImpl(AtomSet& atomSet, TestRunner& checker) override {
    return shrinker.shrinkTestCase(atomSet, checker);
  }

  uint64_t
  getRedundantTestsImpl() override {
    return shrinker.getRedundantTests();
  }
};


}


#endif
