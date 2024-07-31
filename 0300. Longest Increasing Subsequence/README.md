# Solution Walk Through
https://leetcode.com/problems/longest-increasing-subsequence/

## Intuition
- for recursive solution, start othe sequence at each different i of nums, then in recursive call, iterate through the rest of nums starting at i + 1 and doing a dfs starting from any next index that has a higher value that at i
- every time we do an additional recursive call, that means we have found 1 mroe element to add to our current sequence so we can get that result + 1
- cache the results at i in a dp array, which represents the longest sequence you can make starting at this certain index
- for bottom up, start at the end since we want to look at increasing to the right.
- for a given index we are checking, check if any of nums[i + 1} to nums[n-1] is greater than the current nums[i]. if it is, then get the length of the subseuqnece at dp[i] and at the end the longest sub sequence will just be placed in dp[i]

## Approach


## Time Complexity
$O(n^2)$

## Space Complexity
$O(n)$



