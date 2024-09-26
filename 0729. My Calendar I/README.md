# Solution Walk Through
https://leetcode.com/problems/my-calendar-i/?envType=daily-question&envId=2024-09-26

## Intuition
- keeping a sorted list will allow for quick search
- instead of using a list, where saerch will take linear time, use a binary search tree to keep sorted order and log n traversal and insertion
- if the start is greater than the nodes end, then go to right
- if the end is less than nodes start, go right
- otherwise there is an overlap and we can return false immediately

## Approach
- use recursion to continuously traverse the tree and check
- if the left or right of a node doesnt exist and it meets the criteria to be placed, place it there, otherwise traverse to that node and check again
- if any branch returns true, then return true

## Time Complexity
worst case - $O(n)$
average - $O(logn)$

## Space Complexity
$O(n)$



