# Solution Walk Through
https://leetcode.com/problems/partition-labels/

## Intuition
- want to store the last index that each letter appears, since a partition will have to be at least as large as the last index of seen letters for a certain section

## Approach
- use a hashmap to store the last index of each letter
- intiialize a start index and keep checking until your current i is equal to the max of all of the last indices for the seciton

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



