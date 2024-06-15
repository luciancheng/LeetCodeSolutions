# Solution Walk Through
https://leetcode.com/problems/max-area-of-island/

## Intuition
we are trying to find the largest island size on a grid represented by ones. we can just conduct a bfs on each island, starting at an unvisited 1 and we can count the number of ones a part of this island

## Approach
- do a bfs at each unvisited island labelled with a 1
- visit that initial node and add subsequent adjacent squares to the queue that are also unvisited also labelled as a 1

## Time Complexity
$O(n*m * 4 ^(n*m))$

## Space Complexity
$O(n*m)$



