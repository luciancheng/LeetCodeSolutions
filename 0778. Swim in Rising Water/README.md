# Solution Walk Through
https://leetcode.com/problems/swim-in-rising-water/

## Intuition
- this is a weighted graph problem, where the weight of each edge to adjacent cells is going to be the amount of time we need to wait before we get there
- we can use dijkstras algorithm to compute the shortest amount of time we need to wait before reaching bottom right cell
- the current elevation at a cell will be the max between its actual height and the time
- the time it takes to reach the next square will be the max between its actual heights subtracted the current time,

## Approach
- run a dijkstras algorithm by saving the current coordinate and the current time we are at
- have a array to contain visited cells so we dont go over them again

## Time Complexity
$O((n*m)log(n*m))$

## Space Complexity
$O(n*m)$



