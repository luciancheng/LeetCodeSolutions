# Solution Walk Through
https://leetcode.com/problems/minimum-ascii-delete-sum-for-two-strings/description/

## Intuition
- use longest common substring dynamic programming, but instead of keeping the length of it, keep the total ascii value of the longest common subeqeucne
- the total result will the total ascii of s1 - ascii of lcs + ascii of s2 - ascii of lcs

## Approach
- find total ascii of LCS by using the 2D DP approach, and save the total ascii sum up to that point instead of the length
- iterate through s1 and s2 to find the their total ascii values
- subtract LCS from s1 and LCS from 2, shows how much we need to delete from both and sum up the answer

## Time Complexity
$O(n*m)$

## Space Complexity
$O(n*m)$



