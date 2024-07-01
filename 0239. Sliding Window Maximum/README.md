# Solution Walk Through
https://leetcode.com/problems/sliding-window-maximum/

## Intuition
- for each window of size k, we want a easy way to keep track of what the maximum value is, and potential next maximum values may be when the window slides to the right, assuming the current max element will be outside of the window when it shifts
- we can use a monotonically decreasing deque to keep track of the current max element and any subsequent potential max elemetns that the window might be over the next time it shifts

![image](https://github.com/luciancheng/LeetCodeSolutions/assets/121974540/d9924f10-225b-4446-86e2-0073154cc7da)


## Approach
- create a sliding window
- continuously pop smaller elements back out of the deque if the current element is greater than the back element then add the value into the queue
- the front of the deque is the current max element of the sub array
- if the subarray is too big, shrink the sub array and if the left pointer was the max value (front of queue), pop that out of the queue

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



