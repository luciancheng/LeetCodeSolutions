# Solution Walk Through
https://leetcode.com/problems/edit-distance/

## Intuition
- dont use longest common subsequence, wont work based on just using math
- use a decision tree, keeping track of pointers for index for word1 and word2
- at each node, we have a choice, either to replace, insert, or delete, or do nothing if the values match at i1 and i2
- if they match at i1 and i2, dont need any moves, and we have just increment both by 1 since they match
- if we replace, we can also increment both by 1 but we must add 1 move, we are treating it as if the value at i1 was correctly swapped to i2, we dont need to actually do the operation
- if we insert, we can increment i2 by 1, but keep i1 in place, increment by 1 move. treating as if we just inserted a character to match the value at i2, so we can move that pointer forward
- if we delete, increment i1 by 1, keep i2 in place. treating it as if the value at i1 was deleted, and no longer in consideration for checking the value at i2
- if we reach the end of a letter, return the size of the other letter - its index position, this means that the remaining letters will either be inserted or deleted, which will take that many moves

## Approach
- do a dfs and return the minimum amount of moves at each step
- use a 2d dp to memoize results, of size m x n

## Time Complexity
$O(n*m)$

## Space Complexity
$O(n*m)$



