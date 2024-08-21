# Solution Walk Through
https://leetcode.com/problems/sum-of-two-integers/description/

## Intuition
- Use bit mapping to solve thise
- for each bit, starting from the LSB, get each pair of bits from a and b at index i, and compare them along with the carry
- if the total number of 1s after summing bit1, bit2 and carry is 1, no carry, res is 0
- total ones is 2, carry = 1, resbit = 0
- totalones is 3, carry = 1, resbit 1
- tkae the res bit, left shift it by i and then bitwise OR it with the ans, so we can set the bit at index i with a 1 or 0

## Approach

## Time Complexity
$O(1)$

## Space Complexity
$O(1)$



