# Solution Walk Through
https://leetcode.com/problems/longest-repeating-character-replacement/

## Intuition
- to check how many letters we have to swap in the window to get all the letters the same, we should use the lenght of the window and the letter with the max occurence within that window, since length - maxletter will give us the amount of other letters in the window
- if the amount of other letters in the window is greater than our k, that means we have too many other letters in the window and we need to begin shrinking
- keep track of the occurences of each letter within the window and then remove occurences when we shrink

## Approach
- use an hashmap to keep track of each letter and its occurences
- if the lenght of the window - the max occurence of the letter is greater than k, shrink until its not anymore
- get the length of the window: r - l + 1

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



