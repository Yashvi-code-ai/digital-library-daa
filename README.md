# Digital Library Search & Recommendation Engine

C++17 Design and Analysis of Algorithms PBL. A command-line library application combines searchable book/user records, explainable recommendations, and a manually implemented DAA algorithm workbench.

## Build and run
```sh
cmake -S . -B build
cmake --build build --config Release
ctest --test-dir build --output-on-failure
./build/digital-library data/small
```

## Current capabilities
- CSV book/user loading with input validation.
- Search by ID, title, author, category, exact keyword and text pattern.
- Naive, Rabin–Karp, KMP and finite-automaton matchers.
- Recommendation using user interests, reading history/citations and rating.
- Merge sort, quick sort, binary search, graph shortest paths/MST, max-flow, matching, knapsack variants, N-Queens and CRT.
- Runtime Merge-vs-Quick benchmark CSV.

## Recommendation score
For every unread book: 3 points per category-interest match, 2 per keyword-interest match, 1.5 per citation from a previously read book, plus 0.2 times its rating. Results are sorted by score descending and book ID ascending.

## Dataset provenance
Data in `data/` are synthetic/illustrative teaching records. They are not presented as real institutional catalogue data. See `data/README.md`.

## Status
This is an initial working increment, **not yet full compliance** with every algorithm and experiment in the assignment. Consult `docs/COMPLIANCE.md` before submission; the missing algorithms and tests are listed explicitly.

## Individual contribution
This is an individual project. The student author is responsible for requirements analysis, implementation, testing, sample data and documentation. No collaborators or unperformed code reviews are claimed; fill in the student name/ID in `CONTRIBUTIONS.md`.

MIT License; see `LICENSE`.
