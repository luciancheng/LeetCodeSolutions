# Solution Walk Through
https://leetcode.com/problems/construct-binary-tree-from-string/?envType=company&envId=facebook&favoriteSlug=facebook-thirty-days

## Intuition
- Use a stack to store the current node we are on, so we dont need to use recursion
- Whenever we have a number to parse, parse the entire number then add it to the stack
- If the stack isnt empty, then this node is supposed ot be the left or right child of the node at the top of the stack, if the left exists already then this is the right otherwise its the left
- Then after we add it to the stack
- Whenever we see a ) we pop the most recent node out of the stack since this is the end of a branch
- Make sure to account for edge cases for an empty string and that when we are on a open bracket (, do not parse anything

## Approach

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



