# Solution Walk Through
https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/description/?envType=daily-question&envId=2024-07-05

## Intuition
- for a crtical point to occur, it needs to be a local min or max, meaning it needs to be sanwiched between two nodes
- LL of size 3 or less has no answer, size 4 could have one but there would need to be checking
- the furthest distance will be the distance between the first crit point and max crit point
- the closest will be the distance between the 2 closest crit points

## Approach
- use 2 pointers, which will act as our sandwhich, we will check the node in between the two nodes to see if its a critical point
- if it is, save that nodes position and calculate distances if this isnt the first node.
- the furthest distance only needs to be saved once, the min distance will need to constantly be updated to the current distance in case there is antoher crit closer

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



