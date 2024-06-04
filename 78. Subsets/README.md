# Solution Walk Through
https://leetcode.com/problems/subsets/

## Intuition
Since we are trying to get all possible combinations, this is simply just a recursive back tracking problem

## Approach
- conduct a DFS in preorder traversal and append the current vector to the overall answer vector each time the function is called
- when adding an element before the recursive call, we must pop the back element from the current vector afterwards

## Time Complexity
$O(2^n * n)$ - 2^n from the recursive tree call, n for iterating through each element

## Space Complexity
$O(2^n * n)$ - 2^n for the answer vector and n for the height of the recursive call stack



