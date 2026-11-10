# Requirement compliance matrix (conservative initial release)

“Partial” means code exists but required breadth, integration or tests are incomplete. A passing build is not proof of complete syllabus coverage.

| Requirement | Status | Evidence / gap |
|---|---|---|
| C++17, CMake, modular layout | Implemented | CMakeLists.txt, include/, src/ |
| Book/user records, citation links, history | Partial | Book/User types; histories/citations are simple ID lists |
| Iterative and recursive binary search | Implemented | algorithms/strings.cpp |
| Merge sort and Quick sort | Implemented | algorithms/strings.cpp |
| Maximum subarray | Partial | Kadane scan, not recursive divide-and-conquer; return type currently only exposes sum and start index |
| Fast exponentiation | Implemented | algorithms/strings.cpp; test still needed |
| Celebrity identification | Missing | — |
| Classical and Strassen matrix multiplication | Missing | — |
| Activity selection | Missing | — |
| Fractional knapsack reasoning/implementation | Missing | — |
| Huffman coding | Missing | — |
| Dijkstra, Bellman–Ford, Floyd–Warshall | Implemented | algorithms/graphs.cpp; broader edge tests needed |
| Prim and Kruskal | Implemented | algorithms/graphs.cpp |
| 0/1 knapsack DP/backtracking | Implemented | algorithms/optimization.cpp |
| Matrix chain, LCS, optimal BST, TSP DP | Missing | — |
| N-Queens | Partial | Returns one solution, not every solution |
| Sum of subsets | Missing | — |
| FIFO/LIFO/best-bound knapsack B&B | Partial | Shared knapsack B&B strategies are present; “least-cost” requested form not independently modelled |
| Ford–Fulkerson and bipartite matching | Implemented | algorithms/graphs.cpp |
| CRT | Partial | Restricted prime moduli and 64-bit product |
| Naive, Rabin–Karp, DFA, KMP | Implemented | algorithms/strings.cpp |
| Search by ID/title/author/category/keyword/pattern | Implemented | search/search_engine.cpp |
| Similarity analysis and complete reading-history recommendations | Partial | Citation and interest heuristic only |
| Sorting benchmark | Partial | Fixed-seed Merge/Quick, four input sizes |
| Other required benchmark comparisons | Missing | — |
| Small/medium/large/adversarial data | Partial | Data files are synthetic; invalid adversarial row intentionally fails validation |
| Three integrated demo scenarios | Partial | CLI demo outline only; no complete capacity-shock workflow |
| Unit/integration/regression/stress/oracle tests | Partial | Single CTest executable; broader edge/invalid/stress coverage needed |
| Recurrence, P/NP discussion and reduction | Partial | Merge/binary/quicksort plus SUBSET-SUM-to-knapsack sketch |
| Requested user/developer/architecture/algorithm/complexity documentation | Implemented | docs/ |
| Benchmark/test/demo/viva/ethics documentation | Partial | Brief reports exist; report generation and evidence need expansion |
| CSV/JSON report suite and release tag | Partial / not done | One timing CSV; no JSON or release tag yet |

Do not describe this release as fully satisfying the assessment brief. Implement and test every missing/partial row before final submission.
