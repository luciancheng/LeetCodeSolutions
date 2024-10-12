# Solution Walk Through
https://leetcode.com/problems/divide-intervals-into-minimum-number-of-groups/description/?envType=daily-question&envId=2024-10-12

## Intuition
- almost always sort intervals so we get the smallest one first
- be greedy here, find the group with the smallest ending time, if the current one cant be placed after this one, it wont be able to be placed in other groups so then we just add a new entry
- if it can be palced in this obe, pop it out and add the new end time to this and reorganize the min heap

## Approach

## Time Complexity
$O(nlogn)$

## Space Complexity
$O(n)$



