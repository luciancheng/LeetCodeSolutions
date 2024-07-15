# Solution Walk Through
https://leetcode.com/problems/create-binary-tree-from-descriptions/?envType=daily-question&envId=2024-07-15

## Intuition
- want a way to access each given node, and we want to essentially create a sort of adjacenty list / strucutre using the given branches
- we can use a hashmap, with the value as the key, and the node containing that value as its value
- need a way to keep track of child nodes, the only node that isnt in the children node set, will be the root node

## Approach
- iterate through array grabbing the parent, children and if its a left node
- if the parent or children isnt in the map, add that node to the map
- assign the map values left and/or right pointers to the children map node based on the condition
- add it to the children set
- if this child node was in theparent set before, then remove it from parent

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



