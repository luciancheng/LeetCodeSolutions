# Solution Walk Through
https://leetcode.com/problems/binary-tree-level-order-traversal/

## Intuition
- Want a way to keep track of which level we are at, we can do this by keeping track of the height we are currently at within the tree
- we can index the answer array using the height, this will give us the array of all nodes of the same level
- nodes with the same height, are a part of the same level and we can just append the roots value here

## Approach
- do a dfs approach, passing parameters on the current height and the ans array by reference, the height of the root will start at 0
- we can index the answer array using the height

## Time Complexity
$O(n)$ 

## Space Complexity
$O(n)$ 

