# Solution Walk Through
https://leetcode.com/problems/single-number-iii/

## Intuition
since we know that every number appears twice except for 2, if we get the total XOR over the entire sequence, we will be left with the XOR total of the 2 numbers that only appear once, called x and y.
since the XOR value is computed to be a 1 where there is a difference in the bit at the certain bit location, if we can find where there is a 1 in the total XOR, that means that it belongs to one of the numbers we want, x or y
if we find the position of where a 1 is present in the total xor, we can xor all the numbers in the array that also have a 1 at that position, the other numbers will XOR to 0 so we will be left with 1 of them
to get the other number, just xor the number we just found with the total xor

## Approach
- compute total XOR
- find the right most bit position where a 1 is present in the total xor using bitshifting
- compute the total xor over all the numbers that also have a 1 present at that bit location to find num1
- find num2 by doing totalXOR ^ num1

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



