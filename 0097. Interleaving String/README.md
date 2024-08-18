# Solution Walk Through
https://leetcode.com/problems/interleaving-string/

## Intuition
- many ways we can construct this, and we have a decision to make, so its good to do a dfs and recursion algorithm
- progressively go through s1 and s2 by saving their current index traversed and matching it with the frontier of the target
- at a given node, we have a choice to either add char from s1 or from s2.
- simplify this decision, by checking if the current s1 char is equal to the frontier and s2 the same
- if they are the same as the frontier in target, then we can progress that one, but if both are the same, we have the choice to progress both
- if both current char of s1 and s2 are not the same as the frontier check of target, then this is dead end path and return false
- if we have reached the end, meaning i1 + i2 == target.size() then we have found a valid combination
- at the beginning, check if n + m == target.size(), if its not the same, return false since there is no way this is valid

## Approach

## Time Complexity
$O(n * m)$

## Space Complexity
$O(n + m)$



