# Solution Walk Through
https://leetcode.com/problems/maximum-beauty-of-an-array-after-applying-operation/

## Intuition
Since we are bounded by k, we must find the longest subsequence that will all have overlapping ranges within the values of [nums[I] - k, nums[I] + k] inclusive
Since these are not contiguous subarrays, we can sort the list and take a greedy approach.

## Approach
- Sort the provided array in increasing order
- use 2 pointers to track the current minimum and maximum values seen in the subsequent since all the values in between must already satisfy the criteria
- sliding window
- if the minimum and maximums have their regions overlapping, then we can move forward the right pointer of the sliding window while keeping the left and check if the bounds are still overlapping
- if they are not overlapping, then we can shift the entire window over to the left by 1

## Time Complexity
$O(nlogn)$

## Space Complexity
$O(1)$

