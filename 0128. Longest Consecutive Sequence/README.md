# Solution Walk Through
https://leetcode.com/problems/longest-consecutive-sequence/description/

## Intuition
- we can start by adding all the elemtns to a set for easy hashing and O(1) look up as well as geting rid of duplicates since they dont count
- we can then go through the array and start checking on the bottom most element of an avaialble subsequence if that number - 1 is not in the set. for exmaple, if our set had 1,2,3,4 , we would begin our count at 1
since that would give our actual longest and will prevent uncessary compute times. since 4-1, 3-1, and 2-1 are in the set, no point in counting since we know this will not be the longest

## Approach
- use a set to keep all unique elemnts in nums for O(1) look up

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



