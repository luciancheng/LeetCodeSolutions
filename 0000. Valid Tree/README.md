# Solution Walk Through
https://neetcode.io/problems/valid-tree

## Intuition
- a valid graph tree is one with one connected component and no cycles
- we can use a unionfind data structure to keep track of if any redundant edges are present since the parents of those nodes will already be the same, meaning they are already a part of the same connected component, more edges will just make a cycle
- check for one connected component by checking every nodes parents, if its 1 component, each nodes parents should be the same, if we have 2 different parents then there is more than 1 connected component

## Approach

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



