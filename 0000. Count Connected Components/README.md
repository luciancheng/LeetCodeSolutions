# Solution Walk Through
https://neetcode.io/problems/count-connected-components

## Intuition
- connected componetns are parts of a overall graph that have connections to other nodes
- connected components do not make connections to other parts of the graph
- to count connected components, we can use a union find data structure to keep track of which nodes belong to which connected component, and we can check this using that nodes parents since if we have an edge, we union those nodes together to be in the same connected component then

## Approach
- make union find data structure
- union each edge
- go through from 0 to n-1 and count the number of unique parents by using a set

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



