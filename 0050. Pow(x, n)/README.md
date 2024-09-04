# Solution Walk Through
https://leetcode.com/problems/powx-n/

## Intuition
- linear time solution is too slow, has to be log, meaning that it is either a binary search or a divide and conquer
- if we write out the computation, there is repeated work, 2^10 is just 2^6 * 2^5, then we can just keep this going down until we reach n == 1 which is then just x or n == 0 which is just 1
- for odd numbers, like 2^5, just do 2^2 * 2^2 * 2

## Approach
- use a recursive approach to recursively find the solution to the subproblem then use that as the solution to the bigger problem

## Time Complexity
$O(logn)$

## Space Complexity
$O(logn)$



