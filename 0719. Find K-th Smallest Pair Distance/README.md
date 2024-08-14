# Solution Walk Through
https://leetcode.com/problems/find-k-th-smallest-pair-distance/?envType=daily-question&envId=2024-08-14

## Intuition
- Binary search for the correct distance instead of findign teh number
- for every distance, count how many pairs have <= to that distance
- if the number of pairs is < k, then that means this distance couldnt possibly be the answer since there isnt even k pairs with this distance, meaning we ahve to search for a higher difference
- if a number has >= k pairs, this means that this distance is in contention and could be the answer, so we should save it and search in a lower distance.
- the answer will just be the minimum distance that still has >= k number of pairs
- use a sliding window technique to count how many pairs have <= dist if its in sorted order ,the max diff of a sub array will be between the L and R pointer and we can adjust based off of that

## Approach
- run a binary search from l = 0 to r = max(nums)
- do a sliding window technique to count how many pairs have distance <= dist which will be the middle that we test for


## Time Complexity
$O(nlogn)$

## Space Complexity
$O(1)$



