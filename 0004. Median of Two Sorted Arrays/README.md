# Solution Walk Through
https://leetcode.com/problems/median-of-two-sorted-arrays/

## Intuition
- we know the total length of the combined list, and we can figure out what the partition needs to be for 1 half of the median since the median represents half of the sorted
- we want to essentially find the correct partition using binary search since we know its sorted, we can compare the values to the next array
- if we want to use none of one array or 100% of the other, we need to add conditions beyond the array to signal -inf and inf which simplify the process and covers edge cases

## Approach
- do binary search on the smaller array
- get the indices of the parition for both arrays, using the knoweldges of the size of half of the total size
- if the max of both left is less than the min of both right, we have found the correct partition and return the correct median based on the size
- if the left of one is greater than the right of another, that means we either need to shrink or add more of one array to the search

## Time Complexity
$O(log(m + n))$ 

## Space Complexity
$O(1)$ 

