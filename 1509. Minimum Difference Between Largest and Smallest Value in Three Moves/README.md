# Solution Walk Through
https://leetcode.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves/?envType=daily-question&envId=Invalid%20Date

## Intuition
- greediness comes from that fact that the best numbers to change, are going to be the ones at the extreme since they will contribute to making a high overall difference
- Since we want to find the smallest difference between the min and max numbers of the remaining array after changing 3 numbers, it is the best move to change 3 numbers that are either the min or the max since they will affect the difference the most
- We want a way to find out which 3 numbers to change, since we can change 3 of the smallest numbers, 2 smallest, 1 largest, 1 smallest 2 largest, 0 smallest and 3 largest

## Approach
- sort the array to get the smallest elements at the front for easy access
- have pointers to the remaining min and max numbers after changing 3 of the numbers specified
- moves these points by making a sort of sliding window
- then take the minimum of these values

## Time Complexity
$O(nlogn)$

## Space Complexity
$O(1)$



