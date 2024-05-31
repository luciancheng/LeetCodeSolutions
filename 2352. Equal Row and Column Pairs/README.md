# Solution Walk Through
https://leetcode.com/problems/equal-row-and-column-pairs/

## Intuition
Since the ordereding of the elements we are checking from each sub array matters, no easy way to do this problem efficiently, so we have to go through each row and column individually and check it against each other

## Approach
- turn each row and col into a string
- check the strings against each other for equivalence

## Time Complexity
$O(n^3)$

## Space Complexity
$O(n^2)$




