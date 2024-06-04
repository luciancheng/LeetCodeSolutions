# Solution Walk Through
https://leetcode.com/problems/unique-paths-ii/

## Intuition
this is extremely similar to the unique paths problem, where we can just add up the number of unique paths from the square above and square to the left. If there is an obstacle, we can mark that square as 0 since there is no path that can go through

## Approach
- iteate over each element in the obstacleGrid vector
- write over array based on the square above and square to the left
- if an obstacle is present, mark that square as 0 since no paths can go through there

## Time Complexity
$O(n^2)$

## Space Complexity
$O(1)$



