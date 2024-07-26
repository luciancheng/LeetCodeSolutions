# Solution Walk Through
https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/?envType=daily-question&envId=2024-07-26

## Intuition
- to know if we can reach a city, we always need to take the shortest route
- we can be greedy, and use dijkstras algorithm
- if weve visited a node in dijsktras, then that means that node has the shortest path it could possibly be so we dont need to check again

## Approach
- use a heap to implement dijkstras algorithm


## Time Complexity
$O(n^3logn)$

## Space Complexity
$O(n)$



