# Solution Walk Through
https://leetcode.com/problems/reorder-list/

## Intuition
- We essentially want to alternate between joining the head and the tail of the LL while moving inwards towards the middle until all nodes have been rejoined
- for traversal from the front and access from the back, we can add the entire LL to a stack since when we get the top, that will give us the pointer to the tail
  
## Approach
- for the size of the stack, iterate through the amount of times equal to half of the stack size sicne for each tieartion, we will be taking away 2 nodes
- set the cur to the head
- for each iteartion, save the cur->next node
- then join the cur->next to be the top of the stack, while then changing the next of the top of the stack to be the next node that you just saved, then move cur two places to be the next node now
- then continue for nex titeration
- for even lengthed lists, the last node will point to itself, and for odd, it will point to another node, fix tis by setting the final node next to be NULL


## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



