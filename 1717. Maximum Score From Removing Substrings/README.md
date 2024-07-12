# Solution Walk Through
https://leetcode.com/problems/maximum-score-from-removing-substrings/description/?envType=daily-question&envId=2024-07-12

## Intuition
- if there is the same number of a and b in a certain section, we can always get rid of all the letters
- there is a combination that is more valuable than the other, and we can determine this based on the score that each combo gives, the one with higher score is favoured
- after removing a pair, use a stack to keep track of the next letter to get rid of
- any a or b left over in the stack after a letter thats not a or b, is just the minimum number of a or b in there * the worst case value since the rest in there will only form that combo

## Approach
- whenever we see a letter thats not a or b, reset the a and b counter and add the score of the remaining a and b that weere in there
- if we find the good combo, then pop it out, else just add the letter to the stack

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



