# Solution Walk Through
https://leetcode.com/problems/regular-expression-matching/

## Intuition
- for letters and ., its considered a match
- for letters that have a * next to it, our choice is do we either want to take one or take none, if we take one, the next recurisve call with ask the same question until we eventually want to take none
- difficult to implement, but we need to check for a match for current letters, if there is no match and there is no * next to it, we have a problem and need to return false this iteration

## Approach
- if there is a match, we can increment both i and j
- regardless of if there is a match, if there is a * next to it, we can proceed
- one option of within star is to not take the star and increment j to j + 2 to find the next non star term, but if there is a match, we can take the star and increment i but keep j steady
- if either of these fail, base case is a false

## Time Complexity
$O(n*m)$

## Space Complexity
$O(n*m)$



