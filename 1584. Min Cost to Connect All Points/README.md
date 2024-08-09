# Solution Walk Through

## Intuition
- prims algorithm
- find all edges first from a node to all other nodes along with their manhattan distance as weights
- for a grpah to be connected without having any cycles, if it has n nodes, we must use exactly n - 1 edges to connect it
- we can start at any node, this will be similar to dijkstras algorithm, except we dont propagate the total path cost, but rather their individual edge cost and sum it up at the end
- we first need to make an adjacency array connecting all nodes to every other nodes then use a min heap

## Approach


## Time Complexity
$O(n^2logn)$

## Space Complexity
$O(n)$



