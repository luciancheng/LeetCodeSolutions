# Solution Walk Through
https://leetcode.com/problems/reverse-nodes-in-k-group/description/

## Intuition
- the cost to reach the current stair, will be the minimum cost of the two stairs before it

## Approach
- modify the array in place
- start at index 2
- for each index, add the minimum value from the previous two stairs to the current stair
- at the end, your last stair is the final answer

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



