# Solution Walk Through
https://leetcode.com/problems/minimum-number-of-removals-to-make-mountain-array/?envType=daily-question&envId=2024-10-30

## Intuition
-Use longest increasing subsequence algorithm, have a longest increasing subsequence from the left and one from the right
- Then we can go through and find a spot where the removal is at the minimum
- To find the amount of elements we need to remove, just find out how many items are there in the array up to this current index, then subtract that indices left longest increasub subsequence since this tells us how many numbers are in proper increasing order, meaning we need to get rid of the rest
- To comply with the test cases, there must be an element on the left and right smaller than the peak, meaning the left and right cannot be the peak itself, so out check needs to be from i = 1 to i = n- 2
- Also, we cannot delete smaller numbers, so we need to find a place where lisleft and lisright are greater than 1, because if its 1 that means we are deleting everything to the left

## Approach


## Time Complexity
$O(n^2)$

## Space Complexity
$O(n)$



