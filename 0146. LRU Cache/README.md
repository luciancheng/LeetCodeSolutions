# Solution Walk Through
https://leetcode.com/problems/lru-cache/description/

## Intuition
- want a way to keep track of the last used key in O(1) time, while also being able to update that node to not be the last anymore
- we can use a Doubly linked list to keep track of the head and the tail, where the head is the most recently accessed node, and the tail is the last used node
- use 2 hashmaps, one to store the key value pair, and another to store the key to its associated node for O(1) access and we can reorder the pointers

## Approach
- when we make a new node, add that node to the new head of the DLL
- the last used node will be the tail, so if we ever exceed the limit, pop the tail off and add new head pointer
- when we update or access a key, access that node, reassign their next and prev pointers and move this node to the new head

## Time Complexity
$O(1)$

## Space Complexity
$O(n)$



