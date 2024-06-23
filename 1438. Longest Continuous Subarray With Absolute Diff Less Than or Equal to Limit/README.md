# Solution Walk Through
https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/?envType=daily-question&envId=2024-06-23

## Intuition
- for any window we are looking at, to ensure that all possible differences between pairs is within the limit, we just need to ensure that the min and max values of that sub array are within the limit
- we need a way to figure out how to store said min and max values of the subarray, since expanding could add a smaller or larger number and when we shrink the window, it might remove the highest or smallest number
- the multiset will allow us to keep track of the highest and lowest numbers that we have seen so we can easily access the largest and smallest number of each sub array we have seen

## Approach
- intialize the left and right pointers
- when we increase our window, we add the next value at r to the multiset
- we can then find the largest and smallest values using iterator dereferencing and see if the absolute value is within the limits
- if its not, we move the left pointer until it is
- when we move the left pointer, remove that value from the multiset so it will keep the remaining items of the sub array in its sorted form so we can get the min and max
- update the longest variable with itself or the distance from r and l


## Time Complexity
$O(nlogn)$

## Space Complexity
$O(n)$



