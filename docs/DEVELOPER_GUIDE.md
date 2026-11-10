# Developer guide

Keep interfaces in include/dlaa/, implementation in the matching src/ module, and tests independent of the CLI. Algorithm implementations must remain manual where the DAA syllabus assesses the algorithm; do not substitute a standard-library equivalent.

## Add an algorithm

1. Define its input/output contract and preconditions.
2. Implement it in a focused source file.
3. Document loop invariants or recursive correctness reasoning, edge cases and asymptotic bounds.
4. Add normal, boundary, invalid-input and small oracle tests.
5. Benchmark competing strategies on identical inputs.
6. Update algorithm mapping and compliance status honestly.

Build and test with CMake/CTest as shown in the README. Add a robust CSV library, property-based tests and indexed search before treating this as production software.
