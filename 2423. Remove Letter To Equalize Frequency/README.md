# Solution Walk Through
https://leetcode.com/problems/remove-letter-to-equalize-frequency/

## Intuition
- make a freq counter for each letter and get the max frequency that occurs
- if the max freq is 1 then its true
- if all the other numbers have a freq of the max freq - 1 then its also true
- if there is ever a letter that appears only once, but the others appear the same amount, = max freq, then its also true

## Approach
- hashmap to count freq

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



