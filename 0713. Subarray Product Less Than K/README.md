# Solution Walk Through
https://leetcode.com/problems/subarray-product-less-than-k/

## Intuition
Use a sliding window and get the product of all the elemnets within the window. The total number of current valid sub arrays will be the Right - Left pointer + 1. Whenever we encounter a product that is greater than k, 
we enter a loop to reduce the product until its less than k while making sure that the left pointer does not go past the right pointer to account for edge cases.
the right pointe dictates how many valid sub ararys there are.

## Approach
- 2 poitner approach
- find the running product of the sub array
- if prod > k, then move left pointer until prod is < k while L <= R for edge cases

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



