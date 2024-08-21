# Solution Walk Through
https://leetcode.com/problems/distinct-subsequences/description/

## Intuition
- kepe track of two pointers for where we currently are in s and t, and use a decision tree to deteremine how we want to increement them
- bases cases are if we reach the end of t, we have found a valid substring, return 1
- if we reached the end of s without a valid substring, this path is invalid and we can return 0
- we essentially have 2 choices if the current letters at i1 and i2 match, we can either take this current leter into account, or we can skip it
- and if they dont match, our only option is skip it

## Approach
- use a m x n dp array to memoize results
- state variables for recursion are i1 an i2, indicating where are in s and t
- implement 2 choices, either take this letter into account if they match, and the other option is to skip this letter

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



