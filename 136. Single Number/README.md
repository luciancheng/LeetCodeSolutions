# Solution Walk Through
https://leetcode.com/problems/single-number/

## Intuition
if we use xor operator, xor with itself will result in 0 and anything xor with 0 will just be itself. Since xor is associative, xor order doesnt matter, if there is only 1 number with 1 occurence and the rest have 2 occurence, the xor of the other numbers will become 0

## Approach
- just take cumulative xor over all elements in the array, that will be our answer

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



