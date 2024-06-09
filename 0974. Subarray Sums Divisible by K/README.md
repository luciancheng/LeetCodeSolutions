# Solution Walk Through
https://leetcode.com/problems/subarray-sums-divisible-by-k/description/?envType=daily-question&envId=2024-06-09

## Intuition
Since we want to find how many subarrays with sum can be divided by k, we can use the % k to find that out. Use a hashmap to store seen remainders, because if we have seen a remainder before, that means from then to now, there was a valid sub array. We can only add the total number of previous other times we have seen this remainder
we can only add it for a remainder not 0 if this is at least the second time seeing it. otherwise, we can add it if its 0. Add the total number of previous times we ahev seen a certain remainder to our total subsets.

![image](https://github.com/luciancheng/LeetCodeSolutions/assets/121974540/9ec97e76-ebe9-43cb-b88a-e398282158f2)

## Approach
- create a hashamp containing all of the seen remainders, and the number of times we have previously seen it, if its 0, we will count that as 1 initially

## Time Complexity
$O(n)$

## Space Complexity
$O(k)$



