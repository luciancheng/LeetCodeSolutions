# Solution Walk Through
https://leetcode.com/problems/divide-players-into-teams-of-equal-skill/

## Intuition
Since we have an even number of items in skill, we know that each number must have a corresponding pair. Since these can be paired without any constraining ordering, we can sort the array and check the remaining lowest and highest skills at each time to see if their skill sum matches and then we cna add their product

## Approach
- Sort the provided skills array
- 2 pointer approach, checking the smallest and highest skill at each time, if the skill sum matches, add the product to the total chemistry, then move the left and right pointers inwards to keep checking
- if the sum doesnt match for one of the pairs, then there would be no other pair that could match, so we can return -1

## Time Complexity
$O(nlogn)$

## Space Complexity
$O(1)$



