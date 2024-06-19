# Solution Walk Through
https://leetcode.com/problems/next-greater-element-i/description/

## Intuition
- use a hashmap to keep track of each number and their index so we can begins earching from there
- an optimization would be to use a monotonic stack to keep track the next biggest element, use a decreasing monotonic stack
- if the current number we are checking is bigger than the top of the stack, keep popping until it isnt then that is ur next largest number

## Approach
- hasmap to keep track of indices
- use a monotonic stack to keep track of the nex tlargest number, decreasing monotonic stack
- if our current number is bigger than the top of the stack, keep  popping until it isnt since that will be our next biggest number


## Time Complexity
$O(m*n)$

## Space Complexity
$O(n)$



