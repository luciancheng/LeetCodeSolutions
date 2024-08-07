# Solution Walk Through
https://leetcode.com/problems/integer-to-english-words/?envType=daily-question&envId=Invalid%20Date

## Intuition
- every block of 3 digits (thousands) will give the same result
- use recursion to check 3 digits at a time and then move onto the next 3 digits and add the current numbers as text with the addition of a thousands multiplier text, thousand, million, billion, etc

## Approach
- create a hashmap for different number mappings we could use for numbers from 0 to 999, and a hashmap for the thousands count to text, thousand, million, billion, etc
- when looking at each group of 3 digits, we go from the back taking the mod and dividing by 10
- when moving from the back, keep track of the ones digit when looking at the 10s, if the tens is a 1, then we need to make it a number from 11 to 19, anything else we can just add its prefix
- for hundreds term, just add the number + hundred provided these digits are not 0
- add the thousands term text for this recursive call and return this value + the next recursive call with thousandsCount + 1

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



