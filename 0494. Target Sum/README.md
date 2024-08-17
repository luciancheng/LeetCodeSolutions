# Solution Walk Through
https://leetcode.com/problems/target-sum/

## Intuition
- in the decision tree at every index, we have a choice, whether to add or substract the value at idx from the current value before we move on to the next recursive call
- save the repeated work using memoization and the 2d dp array
- we will return 1 from the recursive call is we have reached the end of nums and our target is 0, if its not 0, return 0 meaning that this branch is not a valid path
- take the results from both recursive calls and sum it up, save it in the dp array then return the value

## Approach

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



