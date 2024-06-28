# Solution Walk Through
https://leetcode.com/problems/time-based-key-value-store/

## Intuition
- for each key, save a pair of values, the time stamp it occured at and the value associated with it
- each new item added, will have a timestamp greater than the old one, meaning that the array of pairs will technically be sorted in increasing order or the timestamp
- if its sorted, when we want to get, we can use binary search to find the largest timestamp that is <= to the target time

## Approach
- store each new item as a pair
- when searching, use binary search to find the largest timestamp available that is <= to the target time
- if the current timestamp we are checking is <= target, then we can afford to search for a higher timestamp and we dont need to search for lower
- if the current is > target, then we need to search for a smallest timestamp

## Time Complexity
$O(logn)$

## Space Complexity
$O(n)$



