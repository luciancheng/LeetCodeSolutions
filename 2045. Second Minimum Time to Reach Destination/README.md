# Solution Walk Through
https://leetcode.com/problems/second-minimum-time-to-reach-destination/?envType=daily-question&envId=2024-07-28

## Intuition
- graph traversal algorithm, can use BFS since all edges have the same weight of time
- need a way to determine when we can process or wait, (curTime / change) % 2 == 1 to detect if its a red light. if it is, then we need to wait the idfferent from current time to the next light change
- nodes can be visited twice since we are always guaranteed an answer
- keep track of the time it takes to reach a node, if we encounter the same node twice, or if we encounter it at the same time, we shouldnt count it twice

## Approach

## Time Complexity
$O(m+n)$

## Space Complexity
$O(n)$



