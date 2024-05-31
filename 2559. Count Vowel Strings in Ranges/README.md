# Solution Walk Through
https://leetcode.com/problems/count-vowel-strings-in-ranges/

## Intuition
brute force is to compute the vowel computation over the specified range of each query, but this would run in O(n*k) time

## Approach
- create a new array which stores the number of words from words that meet the vowel criteria to the left of the current index, so when we index this with the inclusive bounds from query, we can subtract the left from the right value to get our answer to add

## Time Complexity
$O(n + k)$

## Space Complexity
$O(n)$



