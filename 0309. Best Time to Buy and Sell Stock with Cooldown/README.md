# Solution Walk Through
https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/

## Intuition
- when iterating through, at every index, we have 2 choices depending on if we currently have a stock or not
- if we have a stock, we can either wait or sell it, and if we sell it, we must skip the next day
- if we do not have a stock, we can either skip or buy
- if we sell a stock, increment idx to idx + 2 since we must skip the next day after selling
- if we reach the end of the array, return 0
- if we buy a stock, do recursive call decremented by prices[idx], and if we sell, do recursive call incremented by prices[idx]

## Approach
- recursive function will require the current index we are at, and whether or not we have a stock currently
- use a 2D dynamic programming array to memoize computed results based on the current index and whether or not we had a stock at that point

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



