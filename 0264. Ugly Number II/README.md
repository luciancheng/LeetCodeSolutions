# Solution Walk Through
https://leetcode.com/problems/ugly-number-ii/?envType=daily-question&envId=2024-08-18

## Intuition
- find the nth number of a sequence where we can take a current number and multiply it by 2, 3, 5
- we can got hroguh each number and do this multiplication and find the nth smallest number
- we can use 3 pointers to keep track of the frontier of the smallest values we can currently achieve, and proceed with that smallest value, then increment that pointer to the next smallest
- always want to go for the smallest value and be greedy since that will keep our array ins orted order

## Approach

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



