# Solution Walk Through
https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/description/?envType=daily-question&envId=2024-07-11

## Intuition
- everytime brackets, use a stack
- when we pop from stack, it already reverse the string for us automatically
- after that, just put back the characters in proper order

## Approach
- use a stack to keep track of characters
- whenever we see a closing bracket, pop items out of stack and add it to a string until opening bracket
- join all the characters into a string and append the characters back into the stack

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



