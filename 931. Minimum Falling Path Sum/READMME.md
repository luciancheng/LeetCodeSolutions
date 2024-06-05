# Solution Walk Through
https://leetcode.com/problems/minimum-falling-path-sum/?envType=daily-question&envId=2024-05-31

## Intuition
This is just a 2D DP problem. since from each square, it can go one below to the left, middle, or right, we just need to see the reach of the squares below upwards and take the minimum path from the square based on the squares that could reach it from the row above.

## Approach
- start on the second row of the grid
- for each grid space, overwrite in place with the sum of the current grid space and the minimum amngst the 2 or 3 squares that could reach it from the row above
- iterate through the last row and find your minimum value

## Time Complexity
$O(n^2)$

## Space Complexity
$O(1)$



