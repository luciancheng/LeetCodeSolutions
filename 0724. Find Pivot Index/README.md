# Solution Walk Through
https://leetcode.com/problems/find-pivot-index/

## Intuition
- we can use a prefix sum to calcualte the sum of the left and right sides of the array

## Approach
- find the sum of the entire array
- as we itearte through to find the pivot index, remove this value from the overall sum then check pivot,
- then we add it to the left sum afterwards since we dont inclue this index in either of the sum calculations


## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



