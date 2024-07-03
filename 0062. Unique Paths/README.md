# Solution Walk Through
https://leetcode.com/problems/unique-paths/

## Intuition
- the total unique ways to get to position i, j will be equal to the sum of the different ways to get to i-1,j and i,j-1 since we can only move down or right
- the unique ways to walk across the top and left sides is 1 due to the constraints

## Approach
- can use recursion to recursively calculate the number of ways to get to a square, by recursively calling until m or n == 1
- or use 2D DP to keep track of the unique number of ways to get to places by summing the top and left squares

## Time Complexity
$O(m*n)$ 

## Space Complexity
$O(m*n)$ 

