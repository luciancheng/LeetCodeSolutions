# Solution Walk Through
https://leetcode.com/problems/extra-characters-in-a-string/?envType=daily-question&envId=2024-09-23

## Intuition
- use a prefix tree so we can look up multiple words at once during a pass through
- each step we have 2 choices, either skip this letter and add it as a extra letter or if there are matching words then break it until nothing else matches
- if we skip this letter, add 1 to the return and if we mathc a word, then just do the recursive call but start next one from i + 1
- 1D dp array
- when i == s.size(), then we ahve reached the end and we can return 0 from this base case since there are no more letters

## Approach

## Time Complexity
$O(k + n)$

## Space Complexity
$O(n)$



