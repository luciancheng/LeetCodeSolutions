# Solution Walk Through
https://leetcode.com/problems/surrounded-regions/description/

## Intuition
- run a dfs on any square with O and have conditions to check if this is fully surrounded, base cases are if its out of bounds, its not surrounded, if it hits an x, its ok, if its visited, its ok
- after we determine if this section is fully surrounded, we have a path variable that saved visited path and we can iterate through and change all cells to X if its fully surrounded

## Approach


## Time Complexity
$O(n*m*n*m)$

## Space Complexity
$O(m*n)$



