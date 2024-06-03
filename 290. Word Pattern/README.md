# Solution Walk Through
https://leetcode.com/problems/word-pattern/

## Intuition
Map each string to a pattern letter, then check if the current parsed string word matches that of the pattern letter, and check if the pattern is already stored

## Approach
- create a map that maps each pattern letter to a string
- iterate through the pattern and parsed string togehter and check if they exists and if they match
- also check if the current word was used as the value of another key

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$
