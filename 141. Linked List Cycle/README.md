# Solution Walk Through
https://leetcode.com/problems/linked-list-cycle/description/

## Intuition
First thought is to use a set to store visited nodes, but this would be inefficient as there would be look up time invovled and O(n) space complexity. A better approach would be to use a 2 pointer method. A fast and a slow pointer, if the fast pointer equals the slow one, then there is a cyccle present, and if the fast pointer becomes NULL, then there is no cycle

## Approach
- use 2 pointers, fast and slow
- iterate through LL, every time we move slow point to next, we move fast next 2 times
- if fast ever is the same as slow, cycle is present
- if fast ever becomes NULL, then no cycle

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$


