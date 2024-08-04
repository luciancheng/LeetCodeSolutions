# Solution Walk Through
https://leetcode.com/problems/partition-equal-subset-sum/description/

## Intuition
- to find all psosible combination of sub arrays that dont have to be contiguous, we can use recursion to find it
- in the recursive call, we essentially have two options, we can either take this number or skip it and modify the remaining amt accordingly
- or for recursion we can iterate from the current index to n and take that number each time and form branches like that
- if the amt is == 0 then we have found an ans
- below 0 or index out of range then return false
- use 2d dp array to keep track of seen values, for current index and the amt, which will be capped at totalAmt

## Approach


## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



