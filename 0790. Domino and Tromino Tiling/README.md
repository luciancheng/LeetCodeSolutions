# Solution Walk Through
https://leetcode.com/problems/domino-and-tromino-tiling/

## Intuition
- draw out all possible pieces and when they can be placed. use a dfs approach to find all possible combinations. store the seen values in a dp array
- if we have the top and bottom the same, then we can place any of the 4 main patterns
- if the top or bottom petrudes, then we have to add another petruding part to fix it and offset eventually. horizontals must be coupled, and L shapes must be coupled

## Approach

## Time Complexity
$O(4*n)$

## Space Complexity
$O(n * n^2)$



