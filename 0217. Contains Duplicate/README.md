# Solution Walk Through
https://leetcode.com/problems/contains-duplicate/

## Intuition
Store the seen numbers and if this is a number weve seen, then return true. if we get to the end of the array, then return false

## Approach
- create a set to store visited numbers
- if the current number has been seen, return true
- if we get to the end and nothing was seen again, return false

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



