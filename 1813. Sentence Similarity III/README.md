# Solution Walk Through
https://leetcode.com/problems/sentence-similarity-iii/?envType=daily-question&envId=2024-10-06

## Intuition
- use l and right pointers to find out where the longest common prefix and suffix of each string ends
- if the strings are intiially the same, then its true
- if at the end, the l and r pointers are only different by 1 index, meaning they are right next to eachother on the shorter string, then its possible to add a sentence into there

## Approach
- use stringstream and get line to parse the string based on space and add it to an array for parsing

## Time Complexity
$O(n1 + n2)$

## Space Complexity
$O(n1 + n2)$



