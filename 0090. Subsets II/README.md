# Solution Walk Through
https://leetcode.com/problems/subsets-ii/

## Intuitionn
- want a way to keep the first instance of a number, but want a way to ensure that no duplicate sub arrays are formed, this can be avoided if we just avoid the same number again on the same recursion call
![image](https://github.com/luciancheng/LeetCodeSolutions/assets/121974540/47ed8ae6-6335-4520-8c2f-75227c8e2c69)

## Approach
- Since we want to essentailly use the first number of the new index at each recursive call, and avoid the same number being seen again, for each recursive call, keep track of the previous number that was just used
- if the current number we are on was just used in the recursive call, then skip this number since it will give the same answer down the road, ex, [1,2,2], we can add the 1 but then we ahve 2 options for 2, if dont skip the second 2, we will end up with 2 subarrays that look like [1,2],
- this can be easily kept if we sort the array first so that all of the same numbers are grouped together, so we can just avoid them at once, but the first number at each recursive call should be added regardless, just the same numbers after in the same call should be avoided

## Time Complexity
$O(2^n)$ 

## Space Complexity
$O(n)$ 

