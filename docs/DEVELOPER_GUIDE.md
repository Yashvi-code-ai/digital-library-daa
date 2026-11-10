# Developer guide

Keep declarations in `include/dlaa/`, implementations in the matching `src/` module, tests independent of the CLI. For a new assessed algorithm: add a public interface, implement it manually, document invariants/preconditions/complexity, add small oracle and edge-case tests, then update the compliance table. Build/test using CMake and CTest.
