# Solution Walk Through
https://leetcode.com/problems/find-if-path-exists-in-graph/description/

## Intuition
Since we want to know if 2 nodes, the start and destination nodes can be reached, we just need to see if they are a part of the same disjoint set. Since we are given edges, we can use a unionfind data structure to group together unioned disjoint sets
once we are done, we can just see if the 2 nodes have the same representative using the find method. if they do, they are in the same unioned group, if not, they are in different groups

## Approach
- create unionfind data structure


## Time Complexity
$O(logn)$

## Space Complexity
$O(n)$



