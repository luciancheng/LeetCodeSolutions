# Solution Walk Through
https://leetcode.com/problems/insert-interval/

## Intuition
- since the original itnervals is sorted, we can traverse it and find the correct location to insert the new interval
- check the new interval start with the startsof the other intervals
- if the start inveral of the new one is less than the one of the interval list while traversing, add the new interval there and determine if we need to merge any intervals or just append it and move the previous pointer

## Approach


## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



