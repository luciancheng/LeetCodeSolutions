# Solution Walk Through
https://leetcode.com/problems/rotate-array/

## Intuition
first bit is to create an extra array and simply cycle through and populate the new one and just set the original array to the new one.
Another one is to essentially keep a pointer at a restart index intially at 0 and keep checking next pointer locations by incrementing by k. if we the next pointer is ever at the restart index, then we need to move the restart index to next index in the array, and then start our hopping from there incase we ever get into loops.

## Approach
- make a restart pointer starting at 0 to check for loops, and increment by 1 if we ever find a loop
- have a current pointer that hops to the right by k each time. the current pointer will start at the restart pointer whenver it changges if it detects an infinite loop

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



