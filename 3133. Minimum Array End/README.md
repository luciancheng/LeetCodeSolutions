# Solution Walk Through
https://leetcode.com/problems/minimum-array-end/?envType=daily-question&envId=2024-11-09

## Intuition
- must be in increasing order
- the AND of everything in the array needs to be = x, that means these the set bits in x must be present in every number at least
- set initial bits of x first, then just go through 1 by 1 and find the next larger number that has the same bits as x set and go up until n
- x is our starting number, since all AND need to be x, then x will contain the necessary bits to return to x after anding
- keep all of x bits set in all numbers while incrementally changing the other ones to get the number we want
- trying to find the nth number int he sequence
- if n = 3, essentially we want to fill in all gaps of 0s with the correct bits that are needed in n, 11
- if the current spot we are trying to set is a 1, move to the next avaailable spot to the left of the bit representation
- if its a 0, put the correct bit regardless of what it is in n
- The number n - 1 tells use what order we need to have the unset remaining bits the result starting at x, without touching any of the already set bits of x

## Approach

## Time Complexity
$O(1)$

## Space Complexity
$O(1)$



