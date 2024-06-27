# Solution Walk Through
https://leetcode.com/problems/same-tree/

## Intuition
- some main conditions to check for at every node
- if they are both null, then its true that they are the same so far
- if one of them is null but the other isnt, then they are not the same tree, return false
- if their values arent the same, its not the same tree etiher, not need to check fruther
- if all of these pass, then we must make sure their left and right subtrees are also the same before we can make a conclusion on this subtree
- return the logical AND of the result of the left and right subtree

## Approach
- create a recursive function passing checking each branch of both trees at the same time

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



