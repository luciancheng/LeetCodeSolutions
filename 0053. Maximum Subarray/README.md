# Solution Walk Through
https://leetcode.com/problems/maximum-subarray/

## Intuition
- whenever we have a current subarray sum of 0, we know that this subarray probably isnt useful since it will only be taking away from other subarrays
- take the max between the current max and the current max + the next item

## Approach
- count the current sum of the subarray
- get the max between the current and the global max to update it
- if the current sum is < 0, reset current sum to 0 since that subarray with a sum < 0 is useless to creating the max

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



