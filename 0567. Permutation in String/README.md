# Solution Walk Through
https://leetcode.com/problems/permutation-in-string/

## Intuition
- since we are looking for a permuation of s1 in s2, we are really looking to see if there is a subarray in s2 that has the same frequency of letters as in s1
- we can use a fixed sliding window, since we know that if a permuation of s1 is in s2, it has to be the same size as s1

## Approach
- make an array to keep track of the frequency of letters in s1 and another one to keep track of the frequency of letters in the subarray in s2

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$ - constant 26 space for each letter in the alphabet



