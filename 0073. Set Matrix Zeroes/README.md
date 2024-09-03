# Solution Walk Through
https://leetcode.com/problems/set-matrix-zeroes/description/

## Intuition
- since we want to fill all rows and col that have a 0 with 0s, just save which rows and columsn contain a 0

## Approach
- iterate through and find which rows and cols have 0s
- populate a set while doing this
- then next iteration, if the coordinate row is valid or the col is valid then change it to a 0

## Time Complexity
$O(n*m)$

## Space Complexity
$O(n + m)$



