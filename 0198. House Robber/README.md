# Solution Walk Through
https://leetcode.com/problems/house-robber/

## Intuition
- for a given index, the houses it could rob, are the i - 2, and i - 3 house.
- we cannot rob the house directly next to it since it would sound the alarm
- there is no need to check the house at i - 4, since the optimal solution would already acocunt for this house from the i - 2 house since there is a 1 gap distance between them

## Approach
- iterate through each item, start at the index 2
- modify the array in place by adding to the current slot, the max between i - 2 and i - 3, and if i - 3 exceeds 0, then just use 0
- retunr the max of the last 2 elements of the array

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



