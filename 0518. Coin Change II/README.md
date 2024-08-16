# Solution Walk Through
https://leetcode.com/problems/coin-change-ii/

## Intuition
- similar to coin change but we are looking for total number of combinations
- base cases for recursive call will be if we reach amount  == 0, amount < 0 or if we exceed the limits of the array
- if we arrive at amount == 0, we have found a combination, and we can return 1 to indicate that this path is valid
- amount < 0, not a vaid path return 0
- exceed coins limits, return 0
- in the end, we want to sum up the total number of combinations
- at ever node we have the choice of either taking the current coin or skipping it

## Approach

## Time Complexity
$O(n)$

## Space Complexity
$O(n * k)$



