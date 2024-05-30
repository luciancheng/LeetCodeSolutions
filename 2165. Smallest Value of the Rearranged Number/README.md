# Solution Walk Through
https://leetcode.com/problems/smallest-value-of-the-rearranged-number/description/

## Intuition
To minimize a positive number with non-leading 0s, we need to start the number with the smallest non-0 digit, then add all the 0s from the original number, and finally add the rest of the numbers in increasing order.

ex. 760053 -> 300567

To minimize a negative number, ignore the negative sign and create the biggest possible absolute value since that will yield the smallest negative number once the negative sign is applied. Do this by putting the digits in decreasing order.

ex. -7605 -> -7650

## Approach
- check if the number is negative
- create a hashmap to store the number of occurrences of each digit
- iterate through the number and populate the hashmap
- for positive numbers, do the steps from intuition until the hashmap is empty
- for negative numbers, do the steps from intuition until hashmap is empty

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$
