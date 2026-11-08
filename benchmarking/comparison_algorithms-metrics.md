# Algorithmic Efficiency Comparison

## Run 1
Naive algorithm result: 625025000
Naive algorithm time: 2.271465 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000120 seconds

## Run 2
Naive algorithm result: 625025000
Naive algorithm time: 2.330456 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000116 seconds

## Run 3
Naive algorithm result: 625025000
Naive algorithm time: 2.342486 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000109 seconds

## Average Execution Times

Naive average: 2.314802 seconds
Single-pass average: 0.000115 seconds

## Relative Difference

Ratio = 2.314802 / 0.000115
Ratio = approximately 20129

The naive algorithm is approximately 20129 times slower
than the single-pass algorithm based on the measured times.

## Analysis

The naive algorithm uses nested loops and has O(n^2)
time complexity. The single-pass algorithm uses one loop
and has O(n) time complexity.

The single-pass algorithm requires much less CPU time.
This may reduce energy consumption, although actual
energy usage was not measured.

The algorithms produce different count results, so this
benchmark compares their execution times rather than
equivalent outputs.
