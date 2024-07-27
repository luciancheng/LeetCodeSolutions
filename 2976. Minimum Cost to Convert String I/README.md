# Solution Walk Through
https://leetcode.com/problems/minimum-cost-to-convert-string-i/?envType=daily-question&envId=2024-07-27

## Intuition
- each letter has a certain weighted graph traversal assocaited wtih it to other letters
- for each letter, we want the shortest path to get to its target letter from its start
- use Dijkstra's Algorithm to determine shortest path
- but if we get the shortest path, we should save it so we dont recompute it again if we dont have to

## Approach
- run dijkstras on each letter index to go from the start to the target

## Time Complexity
$O(n * (n+k)logn))$

## Space Complexity
$O(n)$



