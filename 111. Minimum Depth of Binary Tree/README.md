# Solution Walk Through
https://leetcode.com/problems/minimum-depth-of-binary-tree/

## Intuition
since we only want to know the height of leaf nodes, if a path is NULL/doesnt exist, then we dont need to traverse that path. we can set initial left and right heights to be int max and at the end, we can just return the minimum between the left and right subtree

## Approach
- if root is NULL - return 0
- if both the left and right child are null, then we have reached a leaf node and we can return 1
- traverse the left and right subtrees if it exists and get the corresponding height
- get the minimum between those and return that as the answer

## Time Complexity
$O(n)$ - worst case height of binary tree

## Space Complexity
$O(n)$



