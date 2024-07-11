# Solution Walk Through
https://leetcode.com/problems/rotting-oranges/

## Intuition
- since there could be multiple starting rotitng oranges, and we care about the final timestep, which is also essentially the depth of te graph, we can use a multisource bfs using, keep track of the current time for each cell

## Approach
- for each rotting orange, add it to a queue with time 0
- check adjacent cells to see if there are any fresh oranges, these will bea dded to the queue and will be marked as rotting now and we can increment the time by 1
- if at the end, all of the fresh oranges are gone, return the time, else return -1 since we cannot turn all the oranges to be rotting

## Time Complexity
$O(m*n * 4^(m*n))$

## Space Complexity
$O(m*n)$



