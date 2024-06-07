# Solution Walk Through
https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/?envType=daily-question&envId=2024-06-07

## Intuition
when we see an open bracket, increase the current depth by 1 and we can grab the max of this current depth and the current max depth. when we see a closing bracket, decrease the depth by 1. 

## Approach
- have a counter that counts the current depth and the max depth
- open brackets will increase counter by 1
- closed brackets will decrease counter by 1
- get the max depth each time counter changes

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



