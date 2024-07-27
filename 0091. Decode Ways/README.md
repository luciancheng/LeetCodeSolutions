# Solution Walk Through
https://leetcode.com/problems/decode-ways/

## Intuition
- brute force recursive this problem involves decision tree
- we can take the current letter i, and check i + 1, or we can take i and i + 1 and move next pointer to i + 2
- can only take 2 if s[i] is a 1 or 2, and the next number forms a valid number
- if we encounter where s[i] is 0, we cant have a valid decode of this
- when i reaches the length of s, then we can return 1 since thats the base case and we have reached the end of the string, meaning we have decoded it properly
- use dp map to keep track of the number of ways to decode starting from a certain index in s since we will compute this many times, so its good to keep this saved

## Approach
- create a dfs function passing in the current index we are at

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



