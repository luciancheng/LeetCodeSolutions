# Solution Walk Through
https://leetcode.com/problems/k-radius-subarray-averages/?envType=company&envId=facebook&favoriteSlug=facebook-thirty-days

## Intuition
- Do sliding window, window must be of size 2k + 1 for us to add the average
- If the total size of the array is < 2k + 1, there wont be any valid windows we can take the average, so we should just return an array of -1 of size n
- If n is >= 2k + 1, then we need to add k -1 to the beginning and end for padding,
- Add k# of -1 before, then do sliding window maintaining correct size, then add k# of -1 to the end afterwards

## Approach


## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



