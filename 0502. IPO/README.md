# Solution Walk Through
https://leetcode.com/problems/ipo/?envType=daily-question&envId=2024-06-15

## Intuition
Based on the problem, since we want to maximize total profit using at most k projects, we should select the highest profit project that is affordable with our given capital since we do not lost capital. and we should continue to do this up to k times.
once we get more money, repeat this profit with our new capital

## Approach
- sort a new array that contains the details for each project as a pair based off of its affordability with the most afforadble at the end for O(1) access and removal
- push all of the available profits of each project that is afforadble to a heap with a negative value since the heap is a min heap - the highest profit affordable project will be at the top
- remove that and add that its profit to its current capital and find more affordable projects to add to the heap
- if the heap ever reaches 0, that means there are no more affordable projects and we can return the current capital


## Time Complexity
$O(nlogn + klogn)$

## Space Complexity
$O(n)$



