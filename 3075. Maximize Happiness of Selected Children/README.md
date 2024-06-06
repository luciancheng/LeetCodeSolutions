# Solution Walk Through
https://leetcode.com/problems/maximize-happiness-of-selected-children/?envType=daily-question&envId=2024-06-06

## Intuition
In K turns, we want to select k children. each turn we can select one. to get the total maximum happiness, we can just sort the given array and just sum up the last k elements decremented by 1 for each index

## Approach
- sort the array
- Add from the largest numbers
- for each index we move down, we decrement the happiness level by the distance from the end and add that or 0, whichever is greater

## Time Complexity
$O(nlogn)$

## Space Complexity
$O(1)$



