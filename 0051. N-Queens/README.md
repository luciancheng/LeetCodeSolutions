# Solution Walk Through
https://leetcode.com/problems/n-queens/

## Intuition
- for a queen to be in a valid spot, it cannot be in the same row, column or in any diagonals of already exisiting queens
- we can avoid putting them in the same row by keeping track of the current row and just starting to place them on the next row\
- to check if its in the same diagonal, if we find the difference of the row and col, the abs value of them should be the same

## Approach
- do a recursive backtracking approach
- start at column 0, and place the queen at every possible position it could go in
- have a set that keeps track of positions of placed queens, if we ever see the same oclumn, we cant place it, and if its on the same diagonal we cant place
- if we checked against all prev queens and we can place it, make it a pair, add it to the set, create the string representing the queen position and do recursion
- pop the two out after the recursive call
- when the set of positions size is equal to n, we have got enough queens and we can add it

## Time Complexity
$O(n^n)$

## Space Complexity
$O(n)$



