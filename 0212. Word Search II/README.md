# Solution Walk Through
https://leetcode.com/problems/word-search-ii/

## Intuition
- to search for individual words efficiently, use a prefix tree instead of brute forcing and checking each word directly at each square
- with the prefix tree, conduct a dfs at each cell and see if the letter there can form letters in the prefix tree

## Approach
- the dfs should check if the current trie pointer is a word or not, and if it is we need to add it to the set containing words
- breka out of the loop if the current cell is out of bounds, if the current cell letter isnt in the prefix tree letters or if we have already visited this cell
- do recurisve backtracking

## Time Complexity
$O(l*w + m*n*m*n)$

## Space Complexity
$O(m*n + w)$



