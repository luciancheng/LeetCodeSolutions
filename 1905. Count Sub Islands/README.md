# Solution Walk Through
https://leetcode.com/problems/count-sub-islands/?envType=daily-question&envId=2024-08-28

## Intuition
- graph problem, use dfs or bfs
- initial thought is to do something similar to count islands, but we get all the cells associated with 1 island into an array and afterwards check their corresponding value in grid 1
- can be much more efficient if we a dfs and traverse both grid 1 and 2 at the same time

## Approach
- run a dfs on both grid1 and grid2, grid2 cells are the conditions for if we proceed with the islands since we are counting the islands from here
- if we are out of bounds thats ok, if we reach water in grid2 thats also ok
- the only time when we dont want to count it is when grid2 has land but grid1 does not
- in a cell with this case, dont mark grid2 at i and j as seen since we may unintentially create islands that technically work, but we need to include this bad part to make sure there is still one part that doesnt make this sub island valid

## Time Complexity
$O(n^2*m^2)$

## Space Complexity
$O(n*m)$ - call stack space



