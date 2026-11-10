# Complexity analysis

Let n be the number of records/elements, m pattern length, V vertices, E edges and W knapsack capacity.

| Algorithm | Time | Extra space |
|---|---:|---:|
| Merge sort | Θ(n log n) | Θ(n) |
| Quick sort | expected Θ(n log n), worst Θ(n²) | expected Θ(log n), worst Θ(n) stack |
| Binary search | Θ(log n) | iterative Θ(1), recursive Θ(log n) |
| Naive string search | O(nm) worst case | O(1) |
| Rabin–Karp | expected O(n+m), worst O(nm) | O(1) |
| KMP | Θ(n+m) | Θ(m) |
| DFA matching | Θ(mΣ) preprocessing + Θ(n) scan | Θ(mΣ), Σ=256 bytes |
| Dijkstra | O((V+E)log V) | O(V+E) |
| Bellman–Ford | O(VE) | O(V) |
| Floyd–Warshall | Θ(V³) | Θ(V²) |
| Prim / Kruskal | O(E log V) / O(E log E) | O(V+E) |
| BFS augmenting-path max flow | O(VE²) | O(V²) |
| 0/1 knapsack DP | O(nW) | O(W) |
| Backtracking/B&B knapsack | O(2ⁿ) worst case | exponential frontier/linear recursion |
| N-Queens | O(n!) upper bound | O(n) |

## Recurrence examples

Merge sort: T(n)=2T(n/2)+cn. The recursion tree has log₂n levels, each with Θ(n) work, so Θ(n log n). By Master theorem, a=2, b=2 and f(n)=Θ(n), giving Case 2 and Θ(n log n). Iteration gives 2ᵏT(n/2ᵏ)+ckn; setting k=log₂n yields Θ(n log n). Substitution verifies the bound by induction.

Binary search: T(n)=T(n/2)+Θ(1), hence Θ(log n) by iteration and Master theorem Case 2. Quicksort does not have one fixed balanced recurrence for all inputs: worst case T(n)=T(n−1)+Θ(n) sums to Θ(n²). Master theorem does not directly capture arbitrary data-dependent partitions.

## P, NP and reduction

P contains decision problems solvable in polynomial time. NP contains problems whose yes-certificates are verifiable in polynomial time. NP-hard means every problem in NP polynomially reduces to it; NP-complete means both NP-hard and in NP.

Decision 0/1 Knapsack is NP-complete for binary-encoded integers. Reduce SUBSET-SUM (positive values aᵢ, target B) by creating an item with weight aᵢ and value aᵢ, setting capacity B and target value B. A selection of value at least B and weight at most B has weight exactly B, hence corresponds exactly to a subset summing to B. The construction is polynomial. O(nW) DP is pseudo-polynomial, not polynomial in the bit-length of W.
