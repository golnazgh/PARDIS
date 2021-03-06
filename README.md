# PARDIS

Pardis is an automated tool for reducing test cases used for testing and debugging software.
Pardis builds an Abstract Syntax tree (AST) of a program (test case) and focuses the reduction on portions of the AST with higher priority.
You can find details on the algorithm behind Pardis, its priority mechanism and the experimental results in the following paper:

https://link.springer.com/chapter/10.1007%2F978-3-030-16722-6_24

In addition to different variants of Pardis (removal by node, list or a hybrid mechanism), an implementation of Perses (the state-of-the test case reduction technique before publishing Pardis) is also included for comparison. 
You can find Perses's algorithm in the following paper:

https://people.inf.ethz.ch/suz/publications/perses.pdf

and Perses's benchmark also used in Pardis study in the following link:

https://bitbucket.org/chengniansun/perses_c_benchmarks/src/master/

In addition, there are options that allow for different directions of AST traversal during the reduction process (such as forward, backward).

# How to build

You will need a recent version of C++ compiler in addition to LLVM (version 8 works).
You can build using cmake as follows:
Create a build directory where pardis directory is placed. Then use the following commands:

mkdir && cd build

cmake -DLLVM_DIR=/path/to/LLVM/lib/cmake/llvm ../pardis

make 

After Pardis is built, you can see its different options using the following:

bin/pardis -help

An example run:

bin/pardis -time -cpnf -prefilter=true -queue-fixpoint -queue-mode=node -source=/path/to/file-to-reduce.c -checker=/path/to/checker.sh -o=/path/to/reduced.c

To write the checker.sh file, you need to return exit code 0 if property of interest is not reproduced. Exit code 1 should be returned if property of interest is reproduced.

