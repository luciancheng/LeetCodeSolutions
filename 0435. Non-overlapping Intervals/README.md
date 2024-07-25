# Solution Walk Through
https://leetcode.com/problems/non-overlapping-intervals/

## Intuition
- sort to get intervals in increasing order
- the minimum number of intervals to be removed, will be the most amount of intervals kept within the original list of intervals, to keep the most amount of intervals, we should be greedy and update the right bound of overlapping indices with the minimum between the two checking intervals right bounds
- Intervals overlap if the left bound of the one we are checking is less than the right bound of the last one

## Approach
- sort the intervals array
- keep 2 pointers, for the previous to check and the current one we are checking
- if there are overlaps between two intervals, increment the count, and update the interval at [i][1] with the minimum between the current interval at i and the past one at checkIndex
- increment checkindex

## Time Complexity
$O(nlogn)$

## Space Complexity
$O(1)$



