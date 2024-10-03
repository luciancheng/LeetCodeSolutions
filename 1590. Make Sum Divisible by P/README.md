# Solution Walk Through
https://leetcode.com/problems/make-sum-divisible-by-p/?envType=daily-question&envId=2024-10-03

## Intuition
- need to use some array linear traversal algorithm,
- prefix sum intuition is usually a good place to start, with hashing also
- at a given index, find the smallest possible subarray to remove that ends at the index
- use a combination of prefix sum and remainders to find the optimal removal
- to remove a sub-array to make it divisible by p, we need to reach a target value, which is the total sum % p, meaning we need to look for the smallest subarray that has a sum with remainder of that target
- we can keep the index of each remainder of the prefix sum in a hashtable so we can quickly look up the latest time we saw a compliment that we need
- to find the correct complement ending at I, we need to find out how much we need to keep so that the remainder of the subarray is the target
- do this by taking the current prefix sum, subtracting the target and modding by p to find the correct compliment that would satisfy this

## Approach
- find the sum of the array and calculate the target value we need to reach
- save the right-most index of each remainder of the prefix sum to calculate the smallest subarray to remove

## Time Complexity
$O(n)$

## Space Complexity
$O(p)$



