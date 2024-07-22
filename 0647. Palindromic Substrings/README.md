# Solution Walk Through
https://leetcode.com/problems/palindromic-substrings/

## Intuition
- want a way to iterate through every possible set of substrings, using 2 pointer approach, we can go from l = 0 of sizes 1 - n until all combinations have been reached
- to avoid redundant calculations for palindromes, keep track of base cases
- if we have 2 pointers, l and r, whihc represent the start and end of a substring we are checking, is s[l] == s[r] and the substring from l+1 to r-1 is a palindrome, then the substring from l to r is also a palindrome
- keep a 2D DP vector to keep track of which combination of l and r pointers are palindromes and which arent
- more interested in keep track of substrings using indices, rather than actually using the substring itself since that takes O(n) time and space to create

## Approach
- get the base cases for substrings of length 1 and 2, add each combination of l and r into the dp array at dp[l][r]
- for the main check, start at a substring size of 3, where the right pointer will be at l + size - 1
- if the s[l] == s[r] and dp[l+1][r-1] is a palindrome, then string from l to r is also a palindrome then

## Time Complexity
$O(n^2)$

## Space Complexity
$O(n^2)$



