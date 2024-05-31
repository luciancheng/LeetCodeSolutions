# Solution Walk Through
https://leetcode.com/problems/bitwise-xor-of-all-pairings/

## Intuition
One method is to compute the bitwise XOR over every pair, but this will be inefficient and lead to O(n*m) time complexity. 
For the example of nums1 = [2,1,3], nums2 = [10,2,5,0], if we write out the entire bitwise XOR sequence for nums1[0] over all of nums2, we get 2^10, 2^2, 2^5, 2^0. And since we are eventually going to bitwise XOR all of these
this sequence becomes 2^10^2^2^2^5^2^0. using the associative property, we can perform these xor in any order we want, so we can seperate the XORs into (2^2^2^2)^(10^2^5^0). Any number XOR with itself will be 0, and any number XOR with 0 will be itself. 
if nums2 has an even number, it will be 0 and it will be the current number otherwise.

## Approach
- iterate over nums2 to get its total bitwise XOR since that will not change
- check the length of nums2 to make the corresponding changes to the operation of each element from nums1 to the bitwise XOR total of nums2 (either itself or 0)
- do this for all of nums1

## Time Complexity
$O(n + m)$

## Space Complexity
$O(1)$



