# Solution Walk Through
https://leetcode.com/problems/delete-nodes-and-return-forest/?envType=daily-question&envId=2024-07-17

## Intuition
- want a way to keep track of which parents are deleted, and which children are to be deleted
- if the parent of a node was deleted, we need to add that node to the root vector if the root we are currently on isnt also deleted
- to ensure a node is deleted, need to set the left or right child of the parent node to be NULL

## Approach
- global variable for answer
- dfs while passing in if the parent node was deleted or not, if it was deleted and this node is still valid, we need to add this to the array
- if its valid, check its left and right subtrees after the recursive call to see if they exist and/or have the value to be deleted, if they do, then set it to NULL to break that branch

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



