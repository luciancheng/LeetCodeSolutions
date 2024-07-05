# Solution Walk Through
https://leetcode.com/problems/binary-tree-right-side-view/

## Intuition
- want rightmost node for each height,
- shouldkeep track of the current height we are at
- when doing dfs, the order of traversing the left and right subtrees will always go from left to right, so the most recent call at a certain height, will be the most rightmost node of that height
- we can just update the array at that index for that height 

## Approach

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



