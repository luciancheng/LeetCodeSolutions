# Solution Walk Through
https://leetcode.com/problems/minimum-window-substring/

## Intuition
- have a map that counts the the frequency of the letters of t, representing the letters we need to have
- use the size of t as the counter as to how count how much more letters we need
- start expanding window where l is a part of t
- expand until all letters are covered
- then shrink window while we have enough letters until there isnt and save the answer
![image](https://github.com/luciancheng/LeetCodeSolutions/assets/121974540/6a2d5711-9239-4579-a6d8-b89f27b80483)


## Approach
- use sliding window technique
- count which letters we need and how many we exactly need.

## Time Complexity
$O(n + m)$

## Space Complexity
$O(1)$



