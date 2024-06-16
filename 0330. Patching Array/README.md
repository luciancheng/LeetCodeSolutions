# Solution Walk Through
https://leetcode.com/problems/patching-array/?envType=daily-question&envId=2024-06-16

## Intuition
- take a greedy approach, if there is ever a smallest number that we cant make, we have to add it and that will be + 1 patch added to our moves
- keep track of the current maxreachable number, where this number represents the maxmum range of numbers than can be made from 1 to this number.
- if the ucrrent array number is <= that number + 1, that means this is valid and any number up to that point could be made
- if not, then we must add the lowest number so that all numbers can be made

## Approach
- Loop until max reachable is >= n
- go through array elements if appropriate and add them
- if the array elements are over or they are beyond the maxreachable range, then add the current maxreachable + 1


## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



