# Solution Walk Through
https://leetcode.com/problems/palindrome-partitioning/submissions/1320063579/

## Intuition
- we only want to construct an array of partitions that have palindromes and that consist of all of the letters in the string s
- strating at a given index, a substring could be starting at the index, and could be of length from 1 up to the remaining size of the string, which is size - index
- we only wanna add a substring to the current vector and continue the dfs if the substring itself is a palindrome
- if it is a palindrome, then we need to add it to cur, do recursive call, with the new index being the current index + the size of the substring so we move to the next letter
- if the index == the size of s, then add it to the answer vector since this array is valid

## Approach
- use a recursive backtracking technique
- for each substring, check if its a palindrome by making a helper funciton
- if its a palindrome, do more dfs starting at the index where the current palindrome ends
- pop this out of the current vector after dfs call

## Time Complexity
$O(2^n)$

## Space Complexity
$O(n*n)$



