# User guide

## Requirements and build

Use a C++17 compiler and CMake 3.16+.

```sh
cmake -S . -B build
cmake --build build --config Release
ctest --test-dir build --output-on-failure
./build/digital-library data/small
```

Run with data/medium or data/large to load larger generated catalogues.

## CLI menu

1. Browse catalogue.
2. Search by ID, title, author, category, keyword or pattern. For a pattern search, choose naive, KMP, Rabin–Karp or automaton matcher.
3. Recommend unread resources for a user ID.
4. Algorithm workbench: sorting, string matchers, knapsack, Dijkstra and CRT examples.
5. Execute Merge-vs-Quick sorting benchmark and write results/sorting.csv.
0. Exit.

CSV schemas and sample values are in data/small. IDs are positive and unique; titles and names are required; ratings must be in [0,5]. The compact CSV parser is designed for teaching files and is not a full RFC 4180 implementation.
