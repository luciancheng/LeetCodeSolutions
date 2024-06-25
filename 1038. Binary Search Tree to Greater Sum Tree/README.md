# Solution Walk Through
https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/?envType=daily-question&envId=2024-06-25

## Intuition
- since we want to add all greater numbers, we can simply traverse the tree in the descending order
- for bst, the right is always greater than the left, so in decreasing order, it is right node, root node, left node
- this traversal is a refersed in order traversal, where we search the right subtree first

## Approach
- intiialize a global variable to kepe track of the current sum of everything greater, when traversing the tree in descending order
- traverse tree in reverse in order traversal and get the running sum and add that sum to the current node

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



