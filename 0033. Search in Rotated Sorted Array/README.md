# Solution Walk Through
https://leetcode.com/problems/search-in-rotated-sorted-array/

## Intuition
We want to look for clues that help us identify where the rotation in the array happend. in a normal array nums[l] <= nums[mid] <= nums[r]. but here if we know that nums[l] > nums[mid], that means that the rotation happened between l to mid, and other wise, the rotation will be form mid to r
then we can check if the target is beween the l and mid pointers and if they are, search within that area, otherwise search in the other

## Approach
- implement a binary search


## Time Complexity
$O(logn)$

## Space Complexity
$O(1)$



