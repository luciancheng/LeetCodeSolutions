# Solution Walk Through
https://leetcode.com/problems/compare-version-numbers/

## Intuition
We can check each number seperated by the periods against each version, if they are the same, move to next number. If one if ever bigger than the other, then that version is bigger
if they are of different sizes, check up until the end of the shrotest one, then we can keep checking the other one to see if its either just 0s or anything else, if anything else, that version is bigger

## Approach
- tokenize each string with the period delimiter and convert it to an int and add it to a vector
- iterate through the vector and check if each index is equal

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$
