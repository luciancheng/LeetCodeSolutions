# Solution Walk Through
https://leetcode.com/problems/network-delay-time/

## Intuition
- from starting from k, we want to find the minimum cost path to go to all other nodes, and we want to keep tracking the maximum time it takes up to that point
- use a greedy approach
- once the heap becomes empty, or visited nodes == n, we can stop and return our values

## Approach
- use adjacency list to keep track of directed graph along with weights
- use heap to be greedy and take smallest time up to that point to traverse

## Time Complexity
$O(nlogn)$

## Space Complexity
$O(n)$



