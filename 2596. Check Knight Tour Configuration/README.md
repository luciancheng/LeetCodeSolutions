# Solution Walk Through
https://leetcode.com/problems/check-knight-tour-configuration/

## Intuition
if it reaches the final square, n*n - 1, then return true

## Approach
- We can start at the top left corner and check all possible moves that the knight could do, and see if any of these next moves is the current squares number + 1, if so, then we should move over

## Time Complexity
$O(n*n)$

## Space Complexity
$O(1)$



