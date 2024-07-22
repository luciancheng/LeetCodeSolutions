# Solution Walk Through
https://leetcode.com/problems/longest-palindromic-substring/description/

## Intuition
- keep track of rpeviously computed substrings and if they are paindromes, so we can just check the ends of it and avoid checking the middle portions since we arleady have that saved

## Approach
- use a n x n 2d dp array to keep track of l and r pointers of s and if they are a substring, we can just use this saved value to check the ends of a current string and this represents the center portion


## Time Complexity
$O(n^2)$

## Space Complexity
$O(n^2)$



