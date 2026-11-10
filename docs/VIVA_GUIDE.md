# Viva guide

**Why this project?** It integrates information retrieval with core DAA methods and makes algorithm trade-offs observable.

**How do recommendations work?** Unread books score 3 per matching category interest, 2 per matching keyword interest, 1.5 per citation from a read book, and 0.2 times the rating. A reason string explains matches.

**Why binary search beats linear search?** Each comparison halves a sorted interval, giving O(log n) rather than O(n); sorted input is mandatory.

**Merge sort vs Quick sort?** Merge sort guarantees Θ(n log n), is stable, and uses Θ(n) extra memory. Quick sort is usually in-place and expected Θ(n log n), but has Θ(n²) worst case.

**KMP vs naive?** KMP uses a prefix table so a mismatch does not restart comparison from the beginning; its time is Θ(n+m). Naive search can take O(nm).

**Dijkstra vs Bellman–Ford?** Dijkstra is efficient with nonnegative edge weights; negative edges invalidate its settled-distance greedy argument. Bellman–Ford supports negative edges and detects reachable negative cycles.

**Prim vs Kruskal?** Prim grows one tree by the least costly crossing edge. Kruskal sorts all edges and joins distinct components using disjoint sets.

**What is dynamic programming?** Solve overlapping subproblems once and reuse results. Here 0/1 knapsack DP uses O(nW) time and O(W) memory.

**Greedy vs DP?** Greedy commits to a locally attractive choice and needs an exchange/stays-ahead proof. DP compares structured subproblems where choices overlap.

**Backtracking vs Branch and Bound?** Backtracking prunes infeasible partial states. Branch and Bound also prunes when an optimistic objective bound cannot beat the best solution.

**Ford–Fulkerson?** Repeatedly augment a residual source-to-sink path by its bottleneck capacity. This implementation uses BFS paths, i.e. Edmonds–Karp-style O(VE²).

**Bipartite matching?** Select edges between two vertex sets without reusing endpoints; augmenting paths can reassign an existing match.

**Huffman coding?** A greedy optimal prefix code built by repeatedly combining the two least frequent symbols. It is not implemented in this version.

**Strassen?** Matrix multiplication with seven recursive subproducts, O(n^log₂7); not implemented in this version.

**Master theorem?** A tool for recurrences T(n)=aT(n/b)+f(n) under regularity conditions. It does not directly fit arbitrary input-dependent Quicksort partitions.

**P, NP, NP-hard, NP-complete?** P is polynomial-time solvable; NP certificates are polynomial-time verifiable; NP-hard includes all NP problems under polynomial reduction; NP-complete is both NP-hard and in NP. See the complexity report for the SUBSET-SUM-to-knapsack reduction.

**What are the limitations?** Catalogue scans are linear, data are synthetic, CSV parsing is basic, matcher is byte-oriented, and several mandatory syllabus algorithms remain missing. Be candid and consult COMPLIANCE.md.
