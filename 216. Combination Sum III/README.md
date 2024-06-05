# Solution Walk Through
https://leetcode.com/problems/combination-sum-iii/

## Intuition
combination problem, we can use dfs recursive back tracking to test all possible combinations of numbers

## Approach
- create a dfs algorithm that will itearte through all the numbers from 1 to 9 and add it to a temporary vector
- next dfs call will start at the number after the current one already tried
- if the current sum matches and the number of k matches then we can add that vector to our ans and return the final answer

## Time Complexity
$O(9^k)$

## Space Complexity
$O(k)$



