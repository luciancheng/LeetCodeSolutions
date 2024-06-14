# Solution Walk Through
https://leetcode.com/problems/minimum-increment-to-make-array-unique/?envType=daily-question&envId=2024-06-14

## Intuition
- if we have multiple of the same number, it doesnt matter which one we increment, itll take the same amont of increments to make all unique regardless
- ![image](https://github.com/luciancheng/LeetCodeSolutions/assets/121974540/4c7dfd19-7535-4139-9c6e-0a605dc956cb)


## Approach
- map the occurence of number
- if the occurence if greater than 1, then we need to move all extras to the next number and add it to our total 


## Time Complexity
$O(n + k)$

## Space Complexity
$O(k)$



