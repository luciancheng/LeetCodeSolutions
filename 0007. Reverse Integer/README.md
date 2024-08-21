# Solution Walk Through
https://leetcode.com/problems/reverse-integer/

## Intuition
- simply iterate through and go in reverse order by taking the current digit and adding it to the new num and multiplying by new num by 10 before doing so
- if its negative, apply the negative sign back at the end
- if its about to overflow, we can have a check to see if the newNum > INT_MAX / 10 before we do any calculations, since if this is true, newNum * 10 would overflow it and cause issues so we can just return 0 there

## Approach

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



