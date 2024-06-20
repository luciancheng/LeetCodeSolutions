# Solution Walk Through
https://leetcode.com/problems/invert-binary-tree/

## Intuition
- to invert a tree, we need to set the left subtree to the right and vice versa
- if we encounter a null node, we can just return the null node

## Approach
- set temp variables to hold the left and right subtrees
- set the nodes left to the right and the nodes right to the left
- if we encoutner a null node, then return the null
- finally if all else is successful, return the node


## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



