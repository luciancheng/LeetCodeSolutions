# Solution Walk Through
https://leetcode.com/problems/binary-tree-maximum-path-sum/

## Intuition
- paths can only be left and right subtree, cannot have both as a return value
- to check for a maximum, we need to check the root value, root + left, root + right, root + left + right, since these could all be the absolute maximum path but does not need to go through the root
- as a return value, we cannot return root + left + right, but rather our only returns are root, root + left, root + right, which we will return the maximum of these

## Approach
- use a global variable for the max
- use a dfs approach where we will caculate the max at each node and return the biggest to be used for the parent nodes calculations

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



