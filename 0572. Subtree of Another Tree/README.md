# Solution Walk Through
https://leetcode.com/problems/subtree-of-another-tree/

## Intuition
- this is essentially the same problem as checking if they are the same subtree
- only difference is that we need to run this check on every subtree rather than just the node
- they are the same subtree if the root value is equal, and the left and right subtrees are equal, or if both are null when we reach them
- not equal when only one of them is null and the other isnt, or the numbers arent the same

## Approach
- use a global variable to keep track of validity which will be OR eacht ime a subtree is checked, and will stay true when there is one found
- create a dfs algorithm that will send the root of the subtree down every node to be checked
- have a function that recursively checks if this subtree is matching with that subtree and will return true if it is.

## Time Complexity
$O(n)$ 

## Space Complexity
$O(n)$ 

