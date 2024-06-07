# Solution Walk Through
https://leetcode.com/problems/delete-leaves-with-a-given-value/?envType=daily-question&envId=2024-06-07

## Intuition
When looking at the fact that if we remove leaf nodes, the parent node could then become a children. this means that we want to check on both leaf nodes before going to the parent. This means that we should use a post order DFS traversal, where we look at the children first then the parent.

## Approach
- use a recursive call
- if the root is null, then just reutn null
- get the value of the left and right sub tree
- if the left and right subtree are both null and the roots value is the target, we can return null other wise we can just return the root itself since it wont be deleted

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



