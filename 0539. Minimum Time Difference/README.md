# Solution Walk Through
https://leetcode.com/problems/minimum-time-difference/?envType=daily-question&envId=2024-09-16

## Intuition
- better to sort the times based on the representative mintues and comapre 2 directly adjacent minutes since those are the possible lowest amounts, be greedy here
- comparing the last and first times could differ by 1440. this is because a time of 00:00 could be 0 minutes of 1440 minutes, but when comapring the first and last, we want to use the 1440 minutes since it will be closer to that number than the 0 minuytes
- numbers are between 00:00 and 23:59
- 

## Approach
- convert each string to its appropraite minutes representation
- sort the minutes representation array
- go through comparing each index i with index i + 1 to find the minimum minutes difference
- compare the first and last element, with a compensation of 1440 minutes

## Time Complexity
$O(nlogn)$

## Space Complexity
$O(n)$



