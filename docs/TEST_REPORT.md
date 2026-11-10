# Test report

Build with CMake and execute ctest --test-dir build --output-on-failure. The current unit test executable covers sorting, binary search, four string matchers, knapsack variants, CRT, Dijkstra, Bellman–Ford, max-flow, bipartite matching, MSTs, N-Queens, search and recommendations.

Do not infer complete coverage from this one test executable. Remaining tests should include malformed CSV, invalid IDs/ratings, negative-cycle detection, disconnected MSTs, empty and repetitive strings, randomized oracle comparisons, integration workflows and large-data stress cases. Only report results produced by actually running the tests on the submitted revision.
