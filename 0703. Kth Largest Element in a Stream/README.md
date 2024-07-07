# Solution Walk Through
https://leetcode.com/problems/kth-largest-element-in-a-stream/description/

## Intuition
- use a priority queue of size k, sorted in increasing order to get the kth largest element
- adding a smaller element wouldnt matter, only adding a bigger number would change the largest

## Approach
- use a priortiy queue of size k

## Time Complexity
$O(logn)$

## Space Complexity
$O(n)$



