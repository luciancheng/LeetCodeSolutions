# Solution Walk Through
https://leetcode.com/problems/balanced-binary-tree/

## Intuition
- need a way to get the height of each subtree, and the validity of each subtree
- the validity needs to propagate upwards since if either the left or right subtree is not balanced, then the root node of that subtree is not valid either

## Approach
- return a vector containing a bool value of if its balanced or not and the height of that subtree
- heigth is calculated by 1 + max(left, right)
- validity is calcualted by checking the absolute difference of the left and right subtree, and making sure that the logical AND between the current node, left validity and right validity is all 1

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



