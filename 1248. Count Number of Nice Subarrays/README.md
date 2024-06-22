# Solution Walk Through
https://leetcode.com/problems/count-number-of-nice-subarrays/description/?envType=daily-question&envId=2024-06-22

## Intuition
- use a sliding window to keep track of how many odd numbers we have.
- the trick is that if there are preceeding even numbers to the border odd number, that amount of numbers must be added whenver the right pointer shifts to another even number, meaning it acts as a multiplier since every time r is an even number, it can make that many sub arrays
- when we have too many odds, shift left one over since it will alreayd be sitting on an odd and count how many number until the next odd and save that as the multiplier

## Approach
- have a l and r pointer
- if we have too many odds, move l pointer up by one and reset multiplier, dont add to total
- if we have k odd numbers, move the left pointer pointer until it is on a odd numbers and count how many numbers in between this jump to use as a multiplier if the next r number is even

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



