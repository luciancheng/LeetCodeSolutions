# Solution Walk Through
https://leetcode.com/problems/find-common-characters/?envType=daily-question&envId=2024-06-05

## Intuition
get a counter for each letter occurence in a word. iterate through this counter for the word to get the min for each character over all the words.

## Approach
- have 2 vectors that store the global minimum of each character, and one that stores the character counts for the current words
- iterate through the vectors and replace the global min with the min between that vector and the current word vector
- add the non 0 freq to the overall ans vector

## Time Complexity
$O(n * m)$

## Space Complexity
$O(m)$



