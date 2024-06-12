# Solution Walk Through
https://leetcode.com/problems/sort-colors/?envType=daily-question&envId=2024-06-12

## Intuition
for constant space and no sorting, we can go through the array 3 times, each time checking for numbers 0 1 and 2. have a 2 pointer approach to keep track of where we should swap if we see the correct number at this time

## Approach
- use 2 pointers to keep track of place of current iteration and where to swap if needed
- iterate through this 3 times

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



