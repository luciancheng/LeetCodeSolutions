# Solution Walk Through
https://leetcode.com/problems/k-diff-pairs-in-an-array/

## Intuition
- for every number in the array, check if that number + k is present in the map, if it is, then that is 1 pair
- we dont need to check for the number - k since we will already check for that pair if the lower bound of that number does exist

## Approach
- use hashmap to count the number of occurences of each number and to place avaiable numbers in there
- if k = 0, then we just need to find which numbers occur more than once
- anything else, we need to see if that number + k exists in the map, if it does, then its a valid pair and we can add it


## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



