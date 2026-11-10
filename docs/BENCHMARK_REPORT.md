# Benchmark report

The runner compares Merge sort and Quick sort on identical fixed-seed pseudo-random arrays for n=100, 1,000, 5,000 and 10,000. It verifies that the output is sorted and writes elapsed microseconds to results/sorting.csv. The seed makes input generation repeatable.

No numerical timings are hard-coded in this report. Measurements depend on compiler, optimisation flags, CPU, OS load and runtime. A final empirical report should record hardware/compiler information, repeat trials and report medians. The runner currently does not implement the other comparison pairs requested in the full brief.
