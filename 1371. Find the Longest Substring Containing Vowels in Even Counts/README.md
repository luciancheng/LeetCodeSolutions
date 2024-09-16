# Solution Walk Through
https://leetcode.com/problems/find-the-longest-substring-containing-vowels-in-even-counts/?envType=daily-question&envId=2024-09-15

## Intuition
- use some sort of variable to keep track of the parity of the number of times weve seen a vowel
- use a bitmask which represents whether weve seen the vowels an even or odd number of times, aeiou is represented as LSB 00000 MSB, one vowel for each bit, this will then form a number
- when we necounter the correct vowel, we flip their corresponding bit from a 0 to a 1 or from a 1 to a 0
- dot his as we are going through the string
- if this is the first time weve seen this bit mask, then we should save this index and use it for future length calcs since we are looking for max
- if we encounter the same bit mask twice, that means from the first time to this time, there has been an even number of all vowels seen, either 0, 2, 4, ...

## Approach

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



