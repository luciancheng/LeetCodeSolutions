# Solution Walk Through
https://leetcode.com/problems/merge-k-sorted-lists/

## Intuition
- either go through the head of each linked list and add the smallest node for O(1) space, or go through entire list, sort it and join it

## Approach
- create an array and add all nodes to this array
- sort it based on node values
- join the new list together
- set the last node to point to null

## Time Complexity
$O(k*nlog(k*n))$

## Space Complexity
$O(k*n)$



