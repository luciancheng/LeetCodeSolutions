# Solution Walk Through
https://leetcode.com/problems/verify-preorder-serialization-of-a-binary-tree/

## Intuition
Whenever we hit a non # node, we know that it must have 2 children node. we can keep track of the number of remaining nodes the tree is allowed to have when we go through the entire tree.
if its a number, we can increase the number of total nodes by 2 and if its not, we can decrement it by 1

## Approach
- variable keeping track of allowable nodes based on the current node visited
- numbered nodes will increase the number of allowable nodes
- null nodes will take away
- if the total allowable nodes is 0 at the end, then the tree is proper or else its bad
- and if the allowable nodes is ever negative there is a problem


## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



