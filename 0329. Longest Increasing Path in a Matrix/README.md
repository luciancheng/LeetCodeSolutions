# Solution Walk Through
https://leetcode.com/problems/longest-increasing-path-in-a-matrix/

## Intuition
- We can do a dfs starting at every cell and only proceeding in directions where the next cell is greater than our current cell value
- dont need to store visited cells because we wont even be able to backtrack anyways since we are only going in increasing order
- when we compute a dfs at every cell, save the longest increasing sequence starting from i,j
- next time we come across cell i, j, we can just use the memoized result to avoid uncessary computation since we already know what the longest increasing sequence of that section is

## Approach
- run a dfs at each cell, and save the maximum result starting from each cell

## Time Complexity
$O(n*m)$

## Space Complexity
$O(n*m)$



