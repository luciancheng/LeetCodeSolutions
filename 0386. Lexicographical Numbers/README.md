# Solution Walk Through
https://leetcode.com/problems/lexicographical-numbers/?envType=daily-question&envId=2024-09-21

## Intuition
- its possible to arrange this ordering in a tree structure that we can traverse using dfs
- we know that 1 will always be less than 10, same with 10 < 100
- we know 101 < 11
- with this comparison, we can make a tree that starts from 1 to 9 and do a dfs further from 0 to 9 and include it into the return array if the current number doesnt exceed n
- at each recursive call, we can first check to see if the current number exceeds n or not, if it does then we return and end this branch, if not we can add it and continue searching

## Approach

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



