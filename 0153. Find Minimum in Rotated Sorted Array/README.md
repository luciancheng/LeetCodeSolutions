# Solution Walk Through
https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

## Intuition
- use a binary search since the array is sorted
- if we have a mid point, we can check the numbers to the left and to the right of the mid pointer, if num[mid-1] < num[mid] < num[mid+1], then we have not found a min that we are aware of yet since this pattern is valid and represents no rotation
- if num[mid-1] > num[mid], then that means num[mid] is our minimum due to the dec in the number
- if num[mid + 1] < num[mid], then num[mid+1] is our smallest because of the dec
- if the num at l is greater than at mid, then that means the rotation hapepned somewhere between l and mid, and we should search there, else search higher up

## Approach
- set l and r pointers to 0 and n-1
- for each mid, check the condition above to see if the smallest is any of the values adj to mid
- if not, then udpate pointers

## Time Complexity
$O(logn)$

## Space Complexity
$O(1)$



