# Solution Walk Through
https://leetcode.com/problems/remove-linked-list-elements/

## Intuition
we can reassign pointers by checking if the next nodes value is the target value

## Approach
- create a node that points to the head, we can start our cur there
- if the next node's value is the target, we reassign the pointers, if its not, then we can move cur forward in the linked list

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$


