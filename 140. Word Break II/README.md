# Solution Walk Through
https://leetcode.com/problems/word-break-ii/

## Intuition
starting at the beginning of the string, we should look at which words would be able to fit here from the wordlist parameter. then, from there, we should get the starting index after checking that word to check for any subsequent words. We can do this with recursive backtracking

## Approach
- use a DFS recursive backtracking solution
- pass in an answer vector by reference that we can populate every time we successfully partition a string to the end using the provided words

## Time Complexity
$O(k^n)$ where k is the length of the wordDict vector and n is the length of the string

## Space Complexity
$O(n^2)$ for the return vector


