# Solution Walk Through
https://leetcode.com/problems/height-of-binary-tree-after-subtree-removal-queries/?envType=daily-question&envId=2024-10-26

## Intuition
- Height here is 0 index
- do preprocessing to calculate the height of each node and hash it so we can save it
- while calculating the height, we want to save the top 2 node with the largest height at any given level in the tree, since we will use this to find the total height after doing a query, save the top 2 heights because in case we remove the node with the largest height, we have anotehr node as backup
- after doing a query, find the largest height node of that level, and return the sum of that nodes height + the current level we are on since that will get us the height since the height will be the made up of the max of the heights of a node in a level

## Approach

## Time Complexity
$O(n + q)$

## Space Complexity
$O(n)$



