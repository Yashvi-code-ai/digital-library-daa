# Complexity analysis

Merge sort Θ(n log n), Θ(n) auxiliary space; quicksort expected Θ(n log n), worst Θ(n²); binary search Θ(log n) on sorted input; KMP Θ(n+m), Rabin–Karp expected O(n+m)/worst O(nm), Naive O(nm), DFA preprocessing Θ(mΣ)/scan Θ(n); Dijkstra O((V+E)log V), Bellman–Ford O(VE), Floyd–Warshall Θ(V³), Prim/Kruskal O(E log V), BFS augmenting-path max flow O(VE²), 0/1 knapsack DP O(nW), exact search exponential in n.

Merge recurrence `T(n)=2T(n/2)+cn`: recursion tree has log₂n levels each with Θ(n) work, hence Θ(n log n); Master theorem Case 2 applies. Binary search `T(n)=T(n/2)+Θ(1)` gives Θ(log n) by iteration and Master theorem. For unbalanced quicksort, worst recurrence `T(n)=T(n−1)+Θ(n)` sums to Θ(n²); a single balanced Master-theorem recurrence does not model arbitrary data-dependent partitions.

P is polynomial-time solvability; NP has polynomially verifiable certificates; NP-hard includes problems at least as hard as all NP problems; NP-complete is both NP-hard and in NP. SUBSET-SUM reduces to decision 0/1 knapsack: set each item's weight and value to aᵢ, capacity B, and target value B. A feasible selection with value≥B must have total weight=B, corresponding exactly to a subset summing to B.
