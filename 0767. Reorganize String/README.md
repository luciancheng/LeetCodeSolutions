# Solution Walk Through
https://leetcode.com/problems/reorganize-string/?envType=company&envId=facebook&favoriteSlug=facebook-thirty-days

## Intuition
- Be greedy, place the most common letters first
- cant place letters back to back so after we use a letter, remove from the contenders to place and add it back the iteration after
- keep track of how many letters weve placed, after the heap is empty check if weve used all the letters, if we have then its valid else not

## Approach
- use a heap to keep track of the count of each letter
- after we use a letter remove from the heap and save it in a temp fvariable
- next iertation if the temp variable has a count > 0 then we can add it back to the heap

## Time Complexity
$O(nlogn)$

## Space Complexity
$O(n)$



