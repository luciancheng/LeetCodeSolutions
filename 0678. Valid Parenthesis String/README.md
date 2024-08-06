# Solution Walk Through
https://leetcode.com/problems/valid-parenthesis-string/description/

## Intuition
- DP approach involce using a decision tree for when we encoutner a * in the string, where we can either treat it as a (, ) or nothing at all, and from this decision tree, we cant modify the number of open left brackets by its corresponidng character that we want it to be
- if the number of left open brackets falls below 0, we know this branch is invalid, dont need to use a stack
- use memoization for current index and num open
- for greedy, have a var for leftopenmin and leftopenmax, where when we encoutner a *, it provides a range of number of open left parenthesis, if 0 is included, then this is valid

## Approach


## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



