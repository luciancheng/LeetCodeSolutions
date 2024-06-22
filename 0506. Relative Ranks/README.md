# Solution Walk Through
https://leetcode.com/problems/relative-ranks/?envType=daily-question&envId=2024-06-22

## Intuition
- use a heap to keep track of the ordering of the scores as well as the index that it happens
- use a counter variable to count the relative positioning

## Approach
- use heap to sort the array by highest score and keep track of the index of it
- pop the top element and fix the index

## Time Complexity
$O(nlogn)$

## Space Complexity
$O(n)$



