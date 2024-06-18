# Solution Walk Through
https://leetcode.com/problems/longest-common-subsequence/

## Intuition
- use a 2d dp array to keep track of the longest subsequence in order
- see GFG for this
- 
![image](https://github.com/luciancheng/LeetCodeSolutions/assets/121974540/0cdf1f30-ead4-4d83-a033-386e7e228aa4)

## Approach
- 2d array
- if the letter match at this one index, do the previous diagonal + 1
- if not, then take the max between adjacent indices


## Time Complexity
$O(n*m)$

## Space Complexity
$O(n*m)$



