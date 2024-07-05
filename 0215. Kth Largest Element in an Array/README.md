# Solution Walk Through
https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/1310864245/

## Intuition
- making a heap will take O(n) time
- then we just need to pop from the heap k times and that will be the kth top element
- if we use quick select, select a pivot and then move numbers into corresponding positions, if the pivot index is equal tot he target, then we have found the number, if not, then we call is recursively

## Approach

## Time Complexity
Solution 1 - quick select : $O(n)$
Solution 2 - heap  : $O(n + klog(n))$

## Space Complexity
$O(1)$



