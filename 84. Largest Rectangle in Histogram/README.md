# Solution Walk Through
https://leetcode.com/problems/largest-rectangle-in-histogram/

## Intuition
once we encounter a dip, we have to stop heights that are greater than this dip height in previous indices. if the height is increasing, we can continue counting the previous index areas. because of this, we can use a stack to keep relevant areas that we can calculate.


## Approach
- use a stack to keep track of indices and their height
- if we encounter a heigh that is smaller than the top of the stack, we can calculate the area of the top, up until the current index and pop it untilt he height of the stack is <= to the current height
- if the height it greater, we can just add it to the stack and keep going

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



