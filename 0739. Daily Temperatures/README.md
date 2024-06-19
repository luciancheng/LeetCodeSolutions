# Solution Walk Through
https://leetcode.com/problems/daily-temperatures/

## Intuition
- we can use a monotonic decreasing stack to keep track of days that we ahvent found the answer for yet with their corresponding index
- if our current day temp  < top of stack, we can just add it to the stack
- if its > than top of stack, then we can compute the index difference betwene teh days and pop it out until the top of the stack if >= to the current day

## Approach

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



