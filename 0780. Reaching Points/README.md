# Solution Walk Through
https://leetcode.com/problems/reaching-points/

## Intuition
- more efficient if we start from the end and work towarsd the beginning since if one if greater than the other, there is only 1 path we can take wheras if we start from the start, there are multiple paths
- if once side is greater than the other we can just subtract that from that side.
- if one of the numbers is mathcing, take the modulo to see if it can be reached after doing multiple moves

## Approach
- do recursion and check for conditions

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



