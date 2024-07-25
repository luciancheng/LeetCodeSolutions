# Solution Walk Through
https://leetcode.com/problems/majority-element/

## Intuition
- use a sort of voting algorithm.
- the number that appears more than n/2 times appears the most out of any other number combined
- bayer moore voting algorithm

## Approach
- start at first number with a count of 1 and save it as our current number
- iterate through array, if the nums[i] is not the current number, decrement the count, else increment the count
- if the count ever goes to 0, that means that there is an equal amount of your current num, and any other numbers
- if count goes below 0, then there is more of other elements than this number, meaning it cant be this number

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



