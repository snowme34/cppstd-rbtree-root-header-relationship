# cppstd-rbtree-root-header-relationship

A proof that in the red black tree in gnu g++ std, the header is the parent of root, and the root is the parent of header.

## How to run

Requires gnu g++

```bash
g++ -std=c++17 TestTree.cpp && ./.a.out && rm ./.a.out
```

## Reference

https://github.com/gcc-mirror/gcc/blob/ea257f14ec27dfd6562a924c4de8382bea425c4a/libstdc%2B%2B-v3/src/c%2B%2B98/tree.cc#L195
