# Solution Walk Through
https://leetcode.com/problems/brick-wall/

## Intuition
- the array given to use consists of the size of bricks. if we compute a prefix sum of the brick sizes in the row, itll give us where the edges are in that row
- to minimize the number of bricks cut through, we should find which edge number is the most common since that will minimize the number of bricks cut through

## Approach
- for each row, computer prefix sum excluding the last number
- increment the counter for that edge and update the most frequent edge count
- return the number of rows - the most frequent edge count

## Time Complexity
$O(n*m)$

## Space Complexity
$O(1)$



