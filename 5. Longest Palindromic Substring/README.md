# Solution Walk Through
https://leetcode.com/problems/longest-palindromic-substring/

## Intuition
- check ever possible substring and keep the longest substring seen

## Approach
- iterate through all the indices, computing the substring twice for each indice, once with that index being the middle and another time with 2 indices being in the middle
- if the size of the current substring is greater than the previous, save this new substring

## Time Complexity
$O(n^2)$ 

## Space Complexity
$O(n)$


