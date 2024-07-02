# Solution Walk Through
https://leetcode.com/problems/merge-k-sorted-lists/

## Intuition
- either go through the head of each linked list and add the smallest node for O(1) space, or go through entire list, sort it and join it
- We can also use a merging alroithm, to merge 2 linked lists at time, cutting the number of operations of merging in half instead of going through each node brute force

## Approach
- create an array and add all nodes to this array
- sort it based on node values
- join the new list together
- set the last node to point to null
- for merge, create a helper function to merge 2 linked lists together
- sequentially merge 2 lists at time through each iteration, until there is only 1 linked list left

## Time Complexity
$O(nlogk)$

## Space Complexity
$O(k)$



