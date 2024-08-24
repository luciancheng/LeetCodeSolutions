# Solution Walk Through
https://leetcode.com/problems/find-the-closest-palindrome/?envType=daily-question&envId=2024-08-24

## Intuition
- for a regular number, the best way to make a palindrom with the absolute difference would be to change the right half of a palindrome to match the left half since the values on the right account for a much smaller difference
- some edge cases such as 10 or 9 have odd edge cases that need to be accounted for, their results would result in 9 and 11 respectively
- we can generate a list of potential candidates, soem which mirrors a changed version of the left half to generate a palindrome or generates a palindrome by using pow(10) to get the 9 ands 1s response
- then we can just itearte over these candidates and find the most suitable one
- if the regular ones dont work, then we need to move to checking the ones with the 9s and 1s

## Approach


## Time Complexity
$O(1)$

## Space Complexity
$O(1)$



