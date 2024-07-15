# Solution Walk Through
https://leetcode.com/problems/design-add-and-search-words-data-structure/

## Intuition
- Word insertion is the same as the original prexifx tree
- when searching, for actual letters, we can easily see if its valid not.
- if we encounter a . in this current serach fo the word, do a dfs using all avialable substitute letters and keep track if any of those are valid words, break out of this iteration of the loop since we dont need it anymore

## Approach

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



