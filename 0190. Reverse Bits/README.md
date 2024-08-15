# Solution Walk Through
https://leetcode.com/problems/reverse-bits/

## Intuition
- reverse the bits if we can initially traverse the uint and get the bits in order (left to right), then just assign them in the opposite direction 

## Approach
- iterate from 0 to 31, in eahc iteration, grab the value of the bit at i, whether it being a 0 or 1 by bit shifting n to left by i then & with 1 to just get that bit
- after getting that bit, left shift that value by 31 - i in answer uint and or it to set that value

## Time Complexity
$O(1)$

## Space Complexity
$O(1)$



