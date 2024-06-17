# Solution Walk Through
https://leetcode.com/problems/sum-of-square-numbers/?envType=daily-question&envId=2024-06-17

## Intuition
- we can find the posible range of numbers to check by taking the floor of the sqrt of the target
- have a pointer at the left and right of this range, 0 to the max num
- if we check the current sum of the squares of the left and right and they dont match the target, we adjust our pointers
- if its higher, we need lower so move right --
- if its too low, move left higher ++

## Approach
- 2 pointers to 0 and the floor of the sqrt(target)


## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



