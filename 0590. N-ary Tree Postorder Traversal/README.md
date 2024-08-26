# Solution Walk Through
https://leetcode.com/problems/n-ary-tree-postorder-traversal/?envType=daily-question&envId=2024-08-26

## Intuition
- to do this problem iteratively, use a stack nd continously pop from the stack which will be the depth aspect of this search since we want to go as deep as we can first
- keep a visited array that will store the nodes visited in reverse order
- when doing the traversal in a stack, we are traversing it in a pre order traversal, where we go root -> right ->left and this is done because of the stack, when we reverse it we get the post order traversal

## Approach

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



