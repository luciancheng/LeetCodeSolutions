# Solution Walk Through
https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/

## Intuition
- inorder traversal goes: left->root->right
- preorder traversal goes: root->left->right
- the starting index of the subarray for preorder will be the current root
- all items to the left of the starting index for preorder subarray in inorder array are a part of the left subtree, and all items to right are in the right subtree

- ![image](https://github.com/luciancheng/LeetCodeSolutions/assets/121974540/207b33bb-c8c4-4d4c-8079-3a831cf23b8d)

## Approach
- if we know which portions of which array represent the node, and which represent the left and right subtrees, we can use a divide and conquer algorithm
- first item in preorder is the root, save that number
- with the root, find where the root is in the inorder array, all items to the left of that are a part of the left subtree, and all items to the right are a part of the right subtree
- find the corresponding pivot index in the preorder array
- create the root node and set the corresponding left and rihgt subtree and return

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



