# Solution Walk Through
https://leetcode.com/problems/3sum/

## Intuition
- we can fix one of the numbers, then the problem just becomes two sum
- if we sort it first, we can use the left and right pointer approach in 2 sum to find the right numbers to add
- we need ot skip duplicates, so if the current index checking if equal to the last one, then we can skip

## Approach
- sort array
- fix one number, then do two sum II on the remaining parts of the array

## Time Complexity
$O(n^2)$

## Space Complexity
$O(1)$



