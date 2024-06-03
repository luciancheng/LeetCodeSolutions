# Solution Walk Through
https://leetcode.com/problems/course-schedule-ii/description/

## Intuition
First thing that comes to mind, is that this is a directed grpah problem, where the nodes are courses that point to other courses that you can take. The graph doesnt necessarily have to be directed, so we can use indegrees of each node to determine where to start our BFS search.

## Approach
- Iterate through edge list to create adjaceny pairs and count the number of indegrees
- Queue up all nodes that initially have an indegree of 0, meaning that these are places that we can start our search, will account for unconnected secitons
- add these visited nodes to the visited array
- decrement the inegrees of nodes by 1 each time it shows up in the queue until its 1, which means that we can add it to our queue to be searched or else we risk having duplicate node searches

## Time Complexity
$O(n + e)$

## Space Complexity
$O(n + e)$



