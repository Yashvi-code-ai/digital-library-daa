# Digital Library Search & Recommendation Engine

C++17 DAA project foundation. See `docs/COMPLIANCE.md` for the exact implementation status and known syllabus gaps.

## Build

```sh
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
./build/digital-library data/small
```

The code includes domain records, CSV loading, catalogue search, explainable recommendations, manual sorting/string matching algorithms, graph algorithms, knapsack strategies, N-Queens, CRT, and a sorting benchmark. Dataset provenance and limitations are documented. This is a partial implementation, not yet full compliance with every requested algorithm.
