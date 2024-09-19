# Solution Walk Through
https://leetcode.com/problems/different-ways-to-add-parentheses/?envType=daily-question&envId=2024-09-19

## Intuition
- we essentially just need to find all ways we can compute this sub problem, which is the current given expression
- we can partition it based on where operators are placed, and then continue to partition whenever we see an operator
- dont actually need to place the parentheses

## Approach
- backtracking recursion will have 2 poiints, the left and right pointers and this will do a divide and conquer approach
- iterate through the current given expression from l to r, and every time we see an expression, you can do a partition there
- get the results from each parition which will be saved within an array and then go through each element 1 by 1 and then combine them using the appropriate operators
- base case is if we reached just a number, then we can just convert that number to an int

## Time Complexity
$O(n * 2^n)$

## Space Complexity
$O(n)$



