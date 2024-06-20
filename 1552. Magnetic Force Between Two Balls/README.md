# Solution Walk Through
https://leetcode.com/problems/magnetic-force-between-two-balls/description/?envType=daily-question&envId=2024-06-20

## Intuition
- for problems that invovle finding a min or max of something while being within boundaries of a minimum and maximum value, we can always use binary search to find the most optimal solution
- Since we want to know what the maximum value is within our given conditions we can do a binary search to find the most optimal distance
- The max our distance can be is locked between the min and max value of the position array

## Approach
- sort the position array so we can navigate it easier later on
- since position[i] max is 1e9, we can set our right pointer to be this max value and l to be 0
- we can do a binary search by finding the mid value and seeing how many balls we can fit in the given basket using the mid value as the required minimum distance between them
- if we manage to get equal or more balls placed for this distance than m, that means we can try searching for a larger distance so that we can fit m balls perfectly
- if the number of balls we can place with this current minimum distance, then we need to check a lower distance

## Time Complexity
$O(nlogn)$

## Space Complexity
$O(1)$



