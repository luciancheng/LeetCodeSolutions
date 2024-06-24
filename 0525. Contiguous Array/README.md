# Solution Walk Through
https://leetcode.com/problems/contiguous-array/

## Intuition
- to know when we have seen the same number of 1 and 0, we can use a diff variable that we inc if we see a 1 and dec by 1 if we see a 0
- if whenever we see another number that we have already seen, then we know that from then to now, its a valid sub array, so we can get the length
- the initial diff of 0 should be -1 since that occurs at the beginning of the array

## Approach
- use a map to store seen differences and its indices

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



