# Solution Walk Through
https://leetcode.com/problems/clone-graph/

## Intuition
- to create a deep copy of the graph, we need to reconstruct the graph given each node and its neighbours
- to keep track of nodes that we have already made and we can use for the new graph, use a hashmap with the value as the key and the node pointer as the value
- if we ever encounter that node again, we can just access it directly, if its not there, then we can just make a new entry in the hashmap and then reference it

## Approach
- create a dfs algorithm, passing in the curernt node to be copied, the new hashmap for created nodes and a hashset of viited nodes so we dont go back to the same node
- if we land on a node we have seen before, just return out of the dfs loop
- if the current node we are on has not been made yet, we can make it and add it to the hashmap
- when its made, iterate through all the neighbours of the node, and for each of these, make the node if its not already there and then traverse the dfs to this node

## Time Complexity
$O(V+E * n)$

## Space Complexity
$O(n)$



