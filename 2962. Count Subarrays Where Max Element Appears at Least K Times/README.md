# Solution Walk Through
https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/?envType=daily-question&envId=2024-06-07

## Intuition
we first want to identify what is the maximum element in the subarray which we can do by iterating through it. we can essentially use a sliding window technique to track the number of sub arrays we have seen that are valid with at least k element.
we can have a left and right pointer. intiailyl be in a growing phase, where the right pointer will move until we have reached k elements of the max number. then we will slide the left pointer forward until there is k-1 of the max element present.
then we can jsut add the value of the left pointer to our total answer, since everything before the left pointer will count as a valid subarray since there was k max elements. when we increase right again to find k max elements again. everything before then will still count since that will also be a valid subarray

## Approach
- use sliding window appraoch with 2 pointers

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



