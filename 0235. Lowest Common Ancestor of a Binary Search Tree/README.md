# Solution Walk Through
https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/

## Intuition
- the lowest common ancestor of both nodes p and q, will be the lowest first node that has both p and q as desendants
- want a way to keep track of which decdants are present at each node
- if both are decesendant of a node, then that node is the answer if we havent found anything before that

## Approach
- have a dfs algorithm that returns a vector of bool, which represent if p is a descendant of this node, and if q is a descendant of this node
- if the root is null, neither are a descendant
- get the descendant status of the left and right subtree, as well as checking the current nodes val to see if this node is either one
- take the merge of all 3 bool values for if p and q are descendants
- if p and q are both desecendant, then this node is our answer

## Time Complexity
$O(n)$ 

## Space Complexity
$O(n)$ 

