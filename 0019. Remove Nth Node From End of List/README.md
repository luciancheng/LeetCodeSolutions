# Solution Walk Through
https://leetcode.com/problems/remove-nth-node-from-end-of-list/

## Intuition
we just need to get the pointer to the node before of the one we want to remove, we can do this in O(n) time using a 2 pointer approach

## Approach
- have a fast pointer that moves forward by n
- then increment the slow pointer and fast pointer together, when the fast pointer reaches the end, we can just reassign the slow point to that of the one next to it

## Time Complexity
$O(n)$ 

## Space Complexity
$O(1)$ 

