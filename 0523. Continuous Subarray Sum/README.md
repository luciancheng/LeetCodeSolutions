# Solution Walk Through
https://leetcode.com/problems/continuous-subarray-sum/?envType=daily-question&envId=2024-06-08

## Intuition
We can take the running sum of the array and take get the remainder. If we ever get the same remainder again using the current sum, that means that from then to now, we have added a sub array with a sum equal to a multiple of k.

## Approach
- use a hashmap to keep the remainer and the index that this occured
- get a running sum and find the remainder
- if this is a remainder we have seen before, check if indices are far enough apart, we have found a subarray with the sum = to a multiple of k

## Time Complexity
$O(n)$

## Space Complexity
$O(k)$



