

#ifndef HIERARCHICAL_TEST_CASE_SHRINKER_H
#define HIERARCHICAL_TEST_CASE_SHRINKER_H

#include <bitset>
#include <deque>
#include <numeric>

#include <llvm/ADT/DenseMap.h>
#include <llvm/ADT/PointerIntPair.h>
#include <llvm/ADT/SmallPtrSet.h>
#include <llvm/ADT/SmallVector.h>


namespace testshrinker {


template<typename Element>
class TreeNode {
public:
  enum class VisitAction {
    SKIP_CHILDREN,
    VISIT_CHILDREN,
    VISIT_CHILDREN_OF
  };

  enum Attr {
    IS_RULE,
    IS_LIST,
    IS_ALWAYS_NULLABLE,
    IS_LOCALLY_NULLABLE,
    IS_DATA_NULLABLE,
    LEFT_PRUNED,
    RIGHT_PRUNED,
    ATTR_COUNT
  };

  using TreeType = TreeNode<Element>;
  using ChildList = llvm::SmallVector<TreeType*,4>;

  TreeNode(TreeType* parent, Element element, ChildList&& children)
    : parent{parent},
      children(std::move(children)),
      attrs{},
      element{element}
      { }

  TreeNode(Element element, ChildList&& children)
    : TreeNode{nullptr, element, std::move(children)}
      { }

  bool isAttr(Attr attr) const noexcept { return attrs[attr]; }
  void setAttr(Attr attr)   noexcept { attrs[attr] = true; }
  void clearAttr(Attr attr) noexcept { attrs[attr] = false; }

  Element& getElement() noexcept { return element; }
  const Element& getElement() const noexcept { return element; }
  void setElement(Element newElement) noexcept { this->element = newElement; }

  TreeType* getParent() const noexcept { return parent; }
  void setParent(TreeType* newParent) noexcept { parent = newParent; }

  ChildList& getChildren() noexcept { return children; }
  const ChildList& getChildren() const noexcept { return children; }

  size_t
  getDepth() const {
    const TreeType* node = this;
    size_t size = 0;
    while ((node = node->getParent())) {
      size++;
    }
    return size;
  }

  llvm::SmallVector<const TreeNode<Element>*,12>
  getLeavesWhen(const auto& collectSubtreeWhen) {
    llvm::SmallVector<const TreeNode<Element>*,12> leaves;
    auto retain = [&leaves, &collectSubtreeWhen] (auto* node) {
      return collectSubtreeWhen(node, leaves);
    };
    auto leafCollector = [&leaves,&retain] (auto* node) {
      if (node->getChildren().empty()) {
        leaves.push_back(node);
        return node->makeEmptyChildRange(retain);
      }
      return node->makeChildRange(retain);
    };
    if (retain(this)) {
      visitPreorder(leafCollector);
    }
    return leaves;
  }

  llvm::SmallVector<const TreeNode<Element>*,12>
  getLeaves() {
    return getLeavesWhen([] (auto&, auto&) { return true; });
  }

  llvm::SmallVector<const TreeNode<Element>*,12>
  getKLeavesSkipping(size_t count,
                     llvm::SmallPtrSetImpl<const TreeNode<Element>*> const& toSkip) {
    auto collectWhen = [count,&toSkip] (auto* node, auto& leaves) {
      return !toSkip.count(node) && leaves.size() < count;
    };
    return getLeavesWhen(collectWhen);
  }

  llvm::SmallVector<const TreeNode<Element>*,12>
  getLeavesSkipping(llvm::SmallPtrSetImpl<const TreeNode<Element>*> const& toSkip) {
    auto collectWhen = [&toSkip] (auto* node, auto& leaves) {
      return !toSkip.count(node);
    };
    return getLeavesWhen(collectWhen);
  }

  llvm::SmallVector<const TreeNode<Element>*,12>
  getLeavesReplacing(const llvm::DenseMap<const TreeNode<Element>*,
                                          const TreeNode<Element>*>& replacements) {
    llvm::SmallVector<const TreeNode<Element>*,12> leaves;
    auto all = [] (auto*) { return true; };

    auto leafCollector = [&leaves, &replacements, &all] (auto* node) {
      auto found = replacements.find(node);
      if (found != replacements.end()) {
        if (!found->second->isAttr(IS_RULE)) {
          leaves.push_back(found->second);
        }
        auto* nonconst = const_cast<TreeNode<Element>*>(found->second);
        return nonconst->makeChildRange(all);
      } else if (!node->isAttr(IS_RULE)) {
        leaves.push_back(node);
        return node->makeEmptyChildRange(all);
      }
      return node->makeChildRange(all);
    };
    visitPreorder(leafCollector);
    return leaves;
  }

  void
  eraseFromParent() noexcept {
    if (!parent) {
      return;
    }
    auto& siblings = parent->getChildren();
    auto pos = std::find(siblings.begin(), siblings.end(), this);
    assert(pos != siblings.end() && "Node not found in parent's children.");
    *pos = nullptr;
    parent = nullptr;
  }

  template<typename T>
  class ChildIterator {
  public:
    using iterator          = decltype(std::declval<ChildList>().begin());
    using value_type        = TreeType*;
    using difference_type   = size_t;
    using pointer           = value_type*;
    using reference         = value_type&;
    using iterator_category = std::forward_iterator_tag;

    ChildIterator(const T& filter,
                  iterator pos,
                  iterator end)
      : filter{filter},
        pos{pos},
        end{end} {
      advanceToFirstValid();
    }

    bool
    operator!=(ChildIterator& other) {
      return this->pos != other.pos;
    }

    value_type& operator*() const { return *pos; }

    ChildIterator&
    operator++() {
      ++pos;
      advanceToFirstValid();
      return *this;
    }

  private:
    const T& filter;
    iterator pos;
    iterator end;

    void
    advanceToFirstValid() {
      while (pos != end && (!*pos || !filter(*pos))) {
        ++pos;
      }
    }
  };

  template<typename T>
  llvm::iterator_range<ChildIterator<T>>
  makeChildRange(const T& filter) {
    return llvm::make_range(ChildIterator<T>{filter, children.begin(), children.end()},
                            ChildIterator<T>{filter, children.end(),   children.end()});
  }

  template<typename T>
  llvm::iterator_range<ChildIterator<T>>
  makeChildRange(const T& filter) const {
    auto& kids = const_cast<ChildList&>(children);
    return llvm::make_range(ChildIterator<T>{filter, kids.begin(), kids.end()},
                            ChildIterator<T>{filter, kids.end(),   kids.end()});
  }

  template<typename T>
  llvm::iterator_range<ChildIterator<T>>
  makeEmptyChildRange(const T& filter) const {
    auto& kids = const_cast<ChildList&>(children);
    return llvm::make_range(ChildIterator<T>{filter, kids.end(), kids.end()},
                            ChildIterator<T>{filter, kids.end(), kids.end()});
  }

  void
  visitPreorder(const auto& visit) const {
    auto traverse = [&visit] (auto* node, auto& traverse) -> void {
      auto nextRange = ChildList{visit(node)};
      node->traverseChildren(traverse, nextRange);
    };
    traverse(this, traverse);
  }

  void
  visitPostorder(const auto& visit) const {
    auto traverse = [&visit] (auto* node, auto& traverse) -> void {
      node->traverseChildren(traverse, node->getChildren());
      visit(node);
    };
    traverse(this, traverse);
  }

  void
  visitPostorder(const auto& visit) {
    auto traverse = [&visit] (auto* node, auto& traverse) -> void {
      node->traverseChildren(traverse, node->getChildren());
      visit(node);
    };
    traverse(this, traverse);
  }

  bool
  isNullable() const noexcept {
    return isAttr(IS_DATA_NULLABLE)
      || isAttr(IS_LOCALLY_NULLABLE)
      || isAttr(IS_ALWAYS_NULLABLE);
  }

private:
  TreeType* parent;
  ChildList children;
  std::bitset<ATTR_COUNT-1> attrs;
  Element element;

  void
  traverseChildren(auto traverse, auto& children) const {
    for (auto* child : getTraversalChildren(children)) {
      if (child) {
        traverse(child, traverse);
      }
    }
  }

  // TODO: Do this through a custom range type instead
  virtual ChildList getTraversalChildren(const ChildList& children) const = 0;
};

template<typename Element>
class TraversalPolicy {
public:
  typename TreeNode<Element>::ChildList
  getChildren(const typename TreeNode<Element>::ChildList& children) const {
    return children;
  }
};

template<typename Element, typename Traverser=TraversalPolicy<Element>>
class TreeNodeImpl : public TreeNode<Element> {
public:
  using TreeType = TreeNode<Element>;
  using ChildList = typename TreeType::ChildList;

  TreeNodeImpl(TreeType* parent, Element element, ChildList&& children)
    : TreeNode<Element>{parent, element, std::move(children)}
      { }

  TreeNodeImpl(Element element, ChildList&& children)
    : TreeNode<Element>{nullptr, element, std::move(children)}
      { }

  TreeNodeImpl(Traverser traverser, Element element, ChildList&& children)
    : TreeNode<Element>{nullptr, element, std::move(children)},
      traverser{traverser}
      { }

private:
  Traverser traverser;

  ChildList
  getTraversalChildren(const ChildList& children) const override {
    return traverser.getChildren(children);
  }
};


template<typename Element>
class ListTraversalPolicy {
public:
  using ChildList = typename TreeNode<Element>::ChildList;

  ListTraversalPolicy(ChildList delimiters)
    : delimiters{std::move(delimiters)}
      { }

  ChildList
  getChildren(const ChildList& children) const {
    ChildList newChildren;
    newChildren.reserve(children.size() > 1 ? 2*children.size() : 1);
    assert(children.size() == delimiters.size() - 1);

    bool firstElementSeen = false;
    for (int index = 0, end = children.size(); index != end; ++index) {
      if (auto* child = children[index]) {
        if (firstElementSeen) {
          newChildren.push_back(delimiters[index - 1]);
        }
        newChildren.push_back(child);
        firstElementSeen = true;
      }
    }

    return newChildren;
  }

private:
  ChildList delimiters;
};


struct TreeSize {
  uint64_t bytes;
  uint64_t tokens;
  uint64_t nodes;

  bool
  operator==(const TreeSize& other) const {
    return other.bytes == bytes
        && other.tokens == tokens
        && other.nodes == nodes;
  }
};


template<typename Element>
class CompatibleNodeClassifier {
public:
  using Node = TreeNode<Element>;
  virtual ~CompatibleNodeClassifier() = default;
  virtual size_t getClass(const Node*) const { return 0; }
};


template<typename Element>
class Tree {
public:
  using Node = TreeNode<Element>;
  using ChildList = typename Node::ChildList;
  Node *root;

  template<typename... Args>
  Node*
  createNode(Args... args) {
    nodes.emplace_back(std::forward<Args>(args)...);
    // TODO: replace with return value in C++17
    return &nodes.back();
  }

  template<typename... Args>
  Node*
  createListNode(ChildList delimiters, Args... args) {
    lists.emplace_back(ListTraversalPolicy<Element>{std::move(delimiters)},
                       std::forward<Args>(args)...);
    // TODO: replace with return value in C++17
    lists.back().setAttr(Node::IS_LIST);
    lists.back().setAttr(Node::IS_RULE);
    return &lists.back();
  }

  void
  visitPostorder(auto& visit) {
    root->visitPostorder(visit);
  }

  void
  visitPostorder(auto& visit) const {
    root->visitPostorder(visit);
  }

  TreeSize
  getSize(auto& getElementSize) const noexcept {
    TreeSize size = {0, 0, 0};
    auto visit = [&size,&getElementSize] (auto* node) -> void {
      size.nodes += 1;
      if (!node->isAttr(TreeNode<Element>::IS_RULE)) {
        size.tokens += 1;
        size.bytes  += getElementSize(node->getElement());
      }
    };
    visitPostorder(visit);
    return size;
  }

  using VisitAction = typename Node::VisitAction;
  void
  print(llvm::raw_ostream& out, const auto& printElement, size_t depth = -1) {
    auto all = [] (auto*) { return true; };
    auto printOneNode = [&out,&printElement,depth,all] (auto* node) -> auto {
      if (depth <= node->getDepth()) {
        return node->makeEmptyChildRange(all);
      }
      auto printName = [&out] (auto* node) {
        out << "n" << node;
      };
      auto printEdge = [&out,&printName] (auto* from, auto* to) {
        printName(from);
        out << " -> ";
        printName(to);
      };
      out << "  ";
      printName(node);
      out << "[label=\"";
      printElement(out, node->getElement());
      if (node->isAttr(Node::IS_LIST)) {
        out << "...LIST";
      }
      out << "\""
          << (node->isNullable() ? ", shape=box, color=red" : "")
          << (!node->isAttr(Node::IS_RULE)
              ? ", style=filled, fillcolor=lightblue" : "")
          << "];\n";
      if (node->getParent()) {
        out << "  ";
        printEdge(node->getParent(), node);
        out << ";\n";
      }
      return node->makeChildRange(all);
    };

    out << "digraph {\n";
    root->visitPreorder(printOneNode);
    out << "}\n";
  }

  void
  setClassifier(std::unique_ptr<CompatibleNodeClassifier<Element>> classifier) {
    this->compatibleClassifier = std::move(classifier);
  }
  CompatibleNodeClassifier<Element>&
  getClassifier() const {
    return *compatibleClassifier;
  }

  // Note: this method clones the node structure of this tree, returning a deep copy
  // with respect to the nodes in this tree. The compatibleClassifier is not copied,
  // and the Elements are maintained via shallow copy.
  Tree<Element>
  clone() {
    Tree<Element> newTree;
    newTree.nodes = this->nodes;
    newTree.lists = this->lists;

    using Node = TreeNode<Element>;
    llvm::DenseMap<Node*,Node*> nodeMap;
    for (unsigned i = 0, e = nodes.size(); i < e; ++i) {
      nodeMap[&nodes[i]] = &newTree.nodes[i];
    }
    for (unsigned i = 0, e = lists.size(); i < e; ++i) {
      nodeMap[&lists[i]] = &newTree.lists[i];
    }

    auto getMatch = [&nodeMap] (auto* node) -> TreeNode<Element>* {
      auto foundNode = nodeMap.find(node);
      if (foundNode != nodeMap.end()) {
        return foundNode->second;
      }
      return nullptr;
    };
    auto remapList = [&getMatch] (auto& nodeList) {
      for (auto& node : nodeList) {
        for (auto& child : node.getChildren()) {
          if (child) {
            child = getMatch(child);
            child->setParent(&node);
          }
        }
      }
    };

    remapList(newTree.nodes);
    remapList(newTree.lists);
    newTree.root = getMatch(this->root);
    return newTree;
  }

private:
  std::deque<TreeNodeImpl<Element>> nodes;
  std::deque<TreeNodeImpl<Element,ListTraversalPolicy<Element>>> lists;
  std::unique_ptr<CompatibleNodeClassifier<Element>> compatibleClassifier;
};


// TODO: Make this an inferred template parameter instead in C++17.
class LevelListener {
public:
  virtual ~LevelListener() = default;
  virtual void beginOperation(llvm::StringRef name) {}
  virtual void endOperation(llvm::StringRef name, bool changed) {}
};


template<typename Element>
class LevelOperation {
public:
  using Node = testshrinker::TreeNode<Element>;
  using Tree = testshrinker::Tree<Element>;

  LevelOperation(LevelListener& listener)
    : listener{listener}
      { }

  virtual ~LevelOperation() = default;

  bool
  apply(std::vector<Node*>& nodes, size_t targetLevel) {
    listener.beginOperation(getName());
    bool changed = applyImpl(nodes, targetLevel);
    listener.endOperation(getName(), changed);
    return changed;
  }

private:
  LevelListener& listener;

  virtual bool
  applyImpl(std::vector<Node*>& nodes, size_t targetLevel) = 0;

  virtual llvm::StringRef
  getName() { return ""; }
};


template<typename Element>
class TreeShrinker {
public:
  using Node = testshrinker::TreeNode<Element>;
  using Tree = testshrinker::Tree<Element>;

  enum PerLevelOperationMode {
    ONCE,
    FIXPOINT
  };

  TreeShrinker(llvm::ArrayRef<LevelOperation<Element>*> operations,
               PerLevelOperationMode mode = PerLevelOperationMode::ONCE)
    : operations{operations},
      mode{mode}
      { }

  size_t
  operator()(Tree& tree, const size_t targetLevel = -1) {
    size_t lastLevelChanged = -1;
    int level = 1;
    auto& firstLevel = tree.root->getChildren();
    std::vector<Node*> nodes{firstLevel.begin(), firstLevel.end()};

    while (!nodes.empty()
        && ((size_t)level != targetLevel || lastLevelChanged != (size_t)-1)) {

      bool changed = false;
      for (auto* operation : operations) {
        changed |= operation->apply(nodes, targetLevel);
      }

      lastLevelChanged = !changed ? lastLevelChanged : level;

      if (mode == PerLevelOperationMode::ONCE || !changed) {
        level += 1;
        nodes = collectChildren(nodes);
      }
    }
    return lastLevelChanged;
  }

private:
  llvm::ArrayRef<LevelOperation<Element>*> operations;
  PerLevelOperationMode mode;

  std::vector<Node*>
  collectChildren(llvm::ArrayRef<Node*> parents) {
    std::vector<Node*> children;
    size_t size = std::accumulate(parents.begin(), parents.end(), 0,
      [](auto size, auto* p) {
      return size + (p ? p->getChildren().size() : 0);
    });
    children.reserve(size);
    for (auto* parent : parents) {
      if (!parent) {
        continue;
      }
      auto& localKids = parent->getChildren();
      std::copy_if(localKids.begin(), localKids.end(),
        std::back_inserter(children),
        [] (auto* node) { return node != nullptr; });
    }
    return children;
  }
};


}

#endif
