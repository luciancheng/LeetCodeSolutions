# Solution Walk Through
https://leetcode.com/problems/count-the-number-of-fair-pairs/description/?envType=daily-question&envId=2024-11-13

## Intuition
- We can use the same answer from 2824, if we find the total number of pairs below 2 targets which represent our bounds
- We still need to sort it
- Find the number of pairs that are below the value of upper + 1 and the number of pairs that are below lower
- The difference in the number of these pairs is the number of pairs that are between lower and upper inclusive
- We need the +1 on upper because the algorithm find all pairs below a value, we need +1 on upper so that pairs that have a sum of upper are still included, but lower we dont want to include pairs with lower because we want to save those and we want stuff strictly less

## Approach

## Time Complexity
$O(nlogn)$

## Space Complexity
$O(1)$



