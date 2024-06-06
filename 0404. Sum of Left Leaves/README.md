# Solution Walk Through
https://leetcode.com/problems/sum-of-left-leaves/description/?envType=daily-question&envId=2024-06-06

## Intuition
We only want to add the value from left leaf nodes, leaf node being there is no right or left children. we want to check if this was from the left or right recursive call so we can determine if we add it or not

## Approach
- create a dfs alg, passing in the root and whether or not its a left child
- base case is if it ever reaches NULL, return 0, if its a right leaf node return 0 and left leaf node return the value
- return the sum of the values


## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



