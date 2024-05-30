# Solution Walk Through
https://leetcode.com/problems/number-of-adjacent-elements-with-the-same-color/description/

## Intuition
First thought is to go through each item in the queries and then iterate through the entire colors vector to sum up the number of pairs but this is inefficient.
We can instead, just access the number of pairs from the last query and add/subtract from that based off of where we are inserting and we can compute this in constant time

## Approach
- iterate through queries and check for edge cases on color insertion (i = 0, i = n -1)
- update the previous pairs to the current number of pairs based off of the insertion location

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



