# Solution Walk Through
https://leetcode.com/problems/find-center-of-star-graph/?envType=daily-question&envId=2024-06-27

## Intuition
- for this question, all the nodes are connected to the center node
- just check the degress of each node
- just see which node re occurs multiple time since the other nodes shoul dappear once

## Approach
- we can save seen nodes in the set
- and if its in the set, thats the center,
- set will onyl ever by size 2

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



