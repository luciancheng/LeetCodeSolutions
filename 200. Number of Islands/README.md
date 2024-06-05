# Solution Walk Through
https://leetcode.com/problems/number-of-islands/solutions/5044521/easy-c-beats-100-with-explanation/

## Intuition
First thought is that this is a graph question, so we can use DFS or BFS to solve this. start an any square numbered with a 1 then doncut a bfs or dfs starting that that square to change all other connected 1 to 0 and increment the total islands by 1

## Approach
- first solution is a dfs, second is a bfs
- iterate through the grid and conduct a bfs/dfs on any square numbered with a 1, and through the traversal alg, convert any other squares with 1 to be 0s until no more connected 1s are present
- - then increment the total island count by 1 and keep looking for another 1

## Time Complexity
$O(m*n)$ for dfs 

## Space Complexity
$O(m*n)$ for recursion call stack



