# Solution Walk Through
https://leetcode.com/problems/minimum-size-subarray-sum/

## Intuition
- use sliding window since we want to find the smallest subarray size
- when a subarray has a sum equal or more than the target, anything else we add will always be greater than target, so there is no point in adding more since this will be the min size, which means we can shrink until subarary is no longer >= target

## Approach
- make l and r pointers
- if while the currentsum of the sub array is >= target, then save the lenght of this sub array, then keep removing the left pointer value from the sum until its less than target, each of these times take note of the length and get the min

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



