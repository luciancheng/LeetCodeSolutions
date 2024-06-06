# Solution Walk Through
https://leetcode.com/problems/hand-of-straights/?envType=daily-question&envId=2024-06-06

## Intuition
First thought is to create a map with the occurences of each number. sorting the vector will also make it easier to use since we can iterate backwards and see if there are k consecutive numbers from the back. each time we see a number, we can decrement the count in the map
If a number is not present when we are checking for consecutives, then we return false since there is no way to construct a hand with consecutive numbers
if at the end, all numbers have been used, then we can return true

## Approach
- create unordered map to count frequency of each number
- sort the array
- iterate backwards from the array, get the current number and check groupSize consecutive numbers backwarrds
- if there is ever a number not present in the consecutive number serach, return false
- if we get to the end, then return true


## Time Complexity
$O(n*k + nlogn)$

## Space Complexity
$O(n)$



