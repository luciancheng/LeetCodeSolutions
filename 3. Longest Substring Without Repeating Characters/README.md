# Solution Walk Through
https://leetcode.com/problems/longest-substring-without-repeating-characters/

## Intuition
we can use a sliding window technique of which the sliding area only ever covers unique characters, and if there is ever a repeating character in the window, then we can modigy the pointers to remove said duplicates

## Approach
- have left and right pointers to the ends of the sliding window
- use a hash set to keep all of the seen characters for the sliding window
- if the character at the right pointer is not in the set, we can add it
- if it is, we can keep removing items from the left pointer until said duplicate is not in the set anymore and move the left pointer upwards
- and we can just take the maximum length of the window being right - left

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$


