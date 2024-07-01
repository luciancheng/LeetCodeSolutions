# Solution Walk Through
https://leetcode.com/problems/remove-max-number-of-edges-to-keep-graph-fully-traversable/?envType=daily-question&envId=2024-06-30

## Intuition
- this problem is asking us to make sure that the graph is fully traversable by both bob and alice, meaning that we should use a unionfind data structure to ensure that there is only 1 disjoint set for both bob and alice, and we can use 2 UF data structs to represent the graph for alice and for bob
- for the type 3 paths, we add the union to both alice and bob, and we need to do these first since these edges take priority over the others, since this will allow us to remove redundant edges that only apply to one of them
- if the type 3 edge is redundant for both, then we can just remove it entirely
- then we go through the edges for alice and bob and remove them if they are redundant, meaning that the 2 nodes they join, are already unioned together

## Approach
- create a union find data structure, and one to represent the graph for alice, and one for bob
- go through the type 3 edges first, since they take priorty and remove redundant edges here
- go through alice and bob edges and remove redundancy and increase the removal variable
- if both alice and bob are fully connected, then return the amount of removals, of if not, then return -1;
- have a variable to keep track of the number of disjoint sets for each graph, if the number of disjoint set is 1, then we have a fully connected graph

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



