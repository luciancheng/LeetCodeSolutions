# Solution Walk Through
https://leetcode.com/problems/course-schedule-iv/

## Intuition
This is just a directed grpah quesiton. for each one of the query, we can begin at the start node and do a dfs search to see if its possible to reach the target. if it is, dfs will return true and false if it cannoy
to save time, we can use memorization to save start node and end nodes based on their reachability to avoid recomputing the same answer.

## Approach
- make adjacency list for nodes
- create a dfs with the canreach variable set to false and will be OR with every return value from dfs
- save the status on if it can reach


## Time Complexity
$O(q * (V+E))$ 

## Space Complexity
$O(n^2 + V+E)$ 

