# Solution Walk Through
https://leetcode.com/problems/minimum-total-distance-traveled/?envType=daily-question&envId=2024-10-31

## Intuition
- Sort both the input arrays since this will be easier to deal with 
- Knap sack problem, at each recursive call, we can either place the robot at this factory or we can skip this factory
- If we take this factory, the increment both pointers and add the distance
- If we reach the end of the robots list then we have placed all robots so we can return 0 and take the min of all routes taken
- We need to flatten the factory array into a 1D array by adding each factory position for an amount of times equal to the number of open spots they have , [[2,2], [6,3]] = [2,2,6,6,6]


## Approach

## Time Complexity
$O(n*m)$

## Space Complexity
$O(n*m)$



