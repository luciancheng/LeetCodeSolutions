# Solution Walk Through
https://leetcode.com/problems/nested-list-weight-sum/description/?envType=company&envId=facebook&favoriteSlug=facebook-thirty-days

## Intuition
- use recursion to traverse this properly
- at a given level, for any actual numbers, just add the numbers value * the depth to the result for that recursive call stack
- if its a nest list, then we need to do a recursive call with that nested list and then add the depth + 1 to return the total value of that subsequence which will continuely be recursively called

## Approach

## Time Complexity
$O(n)$

## Space Complexity
$O(k)$, k is the maximum depth of the nested arrays



