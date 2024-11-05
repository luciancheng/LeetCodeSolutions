# Solution Walk Through
https://leetcode.com/problems/minimum-cost-for-tickets/description/?envType=company&envId=facebook&favoriteSlug=facebook-thirty-days&status=TO_DO%2CATTEMPTED

## Intuition
- Use recursion to find the minimum ticket cost by trying all possible combinations
- At every i, we have 3 options, do a 1 day pass, 7 day pass or 30 day pass
- For 1 day pass, add the cost of 1 day and increment the pointer 
- For the 7 day pass, cost a certain day x, this pass covers up until day x + 6, so we need to find out where the end of this pass is, then continue our check there
- For 30 pass, same principle. Find the first index which goes beyond the coverage then add the cost for the 30 day pass
- Speed it up by using memoization

## Approach

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



