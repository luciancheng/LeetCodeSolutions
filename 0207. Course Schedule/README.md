# Solution Walk Through
https://leetcode.com/problems/course-schedule/

## Intuition
- this is a directed graph problem
- the courses we can start at, will be the ones with an indegrees of 0, meaning that this class has no prerequisites as stated by the edge list
- We only want to check the nodes that have an indegrees of 0, its adjacent nodes
- for a given node, we can decrement the indegrees of the adjacent nodes by 1, if it equals 0, then that means we can take the course and check its adjacent courses, else we keep going down the rest of out available nodes
- can check if we can take all courses by checking the final indegrees of all nodes after changes, if we still have some that are > 0, that means we cant take them since they form a cycle

## Approach
- count indegrees of each node
- for each course with an indegrees of 0, add it to the initial queue of courses, and go through the queue
- for each node in the queue, get its adjacent courses and decrement the indegrees of its adjacent courses by 1 since we know this course will contribute to taking that course
- if the next course indegrees is 0, then add it to our queue since this is a valid course to take once the prerequisites are taken
- if at the end of the bfs, there are still nodes with indegrees > 0, that means we cannot take this course schedule

## Time Complexity
$O(n*k)$

## Space Complexity
$O(n)$



