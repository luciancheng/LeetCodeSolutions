# Solution Walk Through
https://leetcode.com/problems/check-if-array-pairs-are-divisible-by-k/?envType=daily-question&envId=2024-10-01

## Intuition
- for each element, to find a pair, we need to know what remainder, when divided by k, this tells us the compliment remaineder that we can try and look for later on in the problem
- for each element, do ((x % k) + k) % k to find the proper remainder, and then we use this find the compliment to k which indiactes a proper pair.
- this method allows for it to work with negative numbers, and normalize the remainder so it can be hashable
- a pair is valid if the sum of their remainders equals to k, doenst matter which exact numbers we pick as long as the remainder sum is correct

## Approach
- once an array of calcualted values if obtained, iterate through it
- if the diff of remainders isnt present, add it to an unordered map to save it
- if its present, then remove the diff from the map and erase it if there are no more entries in it
- if the map is empty, that means we have used all of the numebrs and made a pair with each one, if not, then we cannot do it

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



