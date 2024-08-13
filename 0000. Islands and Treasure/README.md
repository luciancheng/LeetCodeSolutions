# Solution Walk Through
https://neetcode.io/problems/islands-and-treasure

## Intuition
- we want to fill in the distance of each non water square to the nearest treasure square denoted by 0
- do a multi source bfs starting at each treasure cell and slowly branching out and filling the distance squares in the grid

## Approach
- iterate through the grid and add all cells with a 0 to the q, to create a multisource bfs
- go through the queue and add its adjacent cells
- once we reach a cell and it hasnt been visited and in bounds, we change the value of it so it doesnt get traversed again and then add that cell to the queue

## Time Complexity
$O(m*n)$

## Space Complexity
$O(m*n)$



