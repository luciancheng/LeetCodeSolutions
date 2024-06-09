# Solution Walk Through
https://leetcode.com/problems/evaluate-reverse-polish-notation/

## Intuition
use a stack to keep track of which operations need to be done. if its a number, push it to the stack. if its an operation. pop the two most recent elements from the stack, perform the operation and put it back on the stack

## Approach
- create a stack
- append numbers
- for operations, pop out 2 most recent numbers, do operation, push new number back on
- return the top of the stack

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



