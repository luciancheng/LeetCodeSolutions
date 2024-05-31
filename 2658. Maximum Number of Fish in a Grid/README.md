# Solution Walk Through
https://leetcode.com/problems/maximum-number-of-fish-in-a-grid/description/

## Intuition
Since we essentially want to know the maximum number of fish within a given seciton on the grid, we can approach this using bfs to sum up the total number of fish in an area of water which is sperated by land indicated by 0

## Approach
- use BFS and sum up the total number of fish for a given section
- take the maxmimum out of all of these sections

## Time Complexity
$O(n^4)$ 

## Space Complexity
$O(n^2)$ 


