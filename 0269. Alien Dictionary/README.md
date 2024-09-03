# Solution Walk Through
https://neetcode.io/problems/foreign-dictionary

## Intuition
- create a directed graph using an adjacency list while also keeping track of the in degrees of each letter
- only need to compare 2 words at a time, the first different character determine the topological ordering of the letter, a -> b
- queue up all nodes with indegrees of 0, if all nodes have indegrees of 0, then the grpah isnt valid
- if the output string isnt the same length as the total number of letters seen, then there was a cycle somewhere in the graph and the letter ordering is invalid

## Approach
- populate adjacency list
- use khans algorithm to go through and find the topoligical ordering

## Time Complexity
$O(26 * n)$

## Space Complexity
$O(26 * n)$



