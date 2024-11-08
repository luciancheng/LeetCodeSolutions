# Solution Walk Through
https://leetcode.com/problems/maximum-xor-for-each-query/?envType=daily-question&envId=2024-11-08

## Intuition
- Since for each query, we want to continuously remove the last element, just do a prefix sum of the total xor up to that point and override the original input array with the prefix sum of the XOR
- We can then just traverse it backwards to get the correct XOR for the query we want
- Since we are allowed to pick a k < 2^maximumBits, this means that our value of k, will have maximumBits bits available to us to use to try and make the largest XORed number with the XOR query from the array
- We know that XOR will set a bit if both bits there are different,and will be 0 if both are the same
- This means that the value of k that maxmimizes the query, will have the complete opposite set bits as the first maxmimumBits bits of the query we are checking

## Approach

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



