# Solution Walk Through
https://leetcode.com/problems/house-robber-ii/

## Intuition
- use the same solution as house robber 1, where we can find the maxmimum amount of money to steal by skipping over adj houses, and looking for hours i - 2, and i - 3
- for this case, we want to set end points since the first and last house is connected, the 2 ways we can do this is from house 0 to n - 2, or house 1 to n - 1

## Approach

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



