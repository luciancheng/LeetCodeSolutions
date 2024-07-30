# Solution Walk Through
https://leetcode.com/problems/merge-triplets-to-form-target-triplet/

## Intuition
- triplets can be merged, by taking their max values at each index i
- this means that if a triplet has a value at i that is greater than the value in target[i] we cant use this triplet since we already know we will not be able to make the target since one of the number will be greater than the target and we cant bring that down
- once we determine that a triplet meets the criteria, meaning all indeices are less than the target at those indices, then we can check if this has any useful values
- if the current index is equal to the target index, then we can mark that index as having a found suitor and we can move on

## Approach
- be greedy, if one triplet has values that are too high for the target, then we skip it since we know it can never make the triplet if we use it

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



