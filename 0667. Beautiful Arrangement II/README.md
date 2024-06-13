# Solution Walk Through
https://leetcode.com/problems/beautiful-arrangement-ii/

## Intuition
for a given n, the maximum amount of k distinct integers is going to be n-1. this is ony achieveable if we place the items in the answer array in a convering manner from 1 and n. ie n = 6, k = 5 , 
answer = [1, 6, 2, 5, 3, 4], have k = 5 distinct integers = [5, 4, 3, 2, 1]. to get a certain amount of k distinct integers, we can follow this pattern k times, then we can force the same difference from then onwards
![image](https://github.com/luciancheng/LeetCodeSolutions/assets/121974540/f0d66261-3d10-4a4b-ae1c-16e6a75ee2f3)
![image](https://github.com/luciancheng/LeetCodeSolutions/assets/121974540/f0d66261-3d10-4a4b-ae1c-16e6a75ee2f3)


## Approach
- have a left and right value corresponding to 1 and n initially
- place them in a left, right left+1, right-1 configuration k times
- then from there, if the patternw as supposed to increase, just make an increment of 1 with remaining numbers
- if decrease, just make decrement of 1 with remaining numbers

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



