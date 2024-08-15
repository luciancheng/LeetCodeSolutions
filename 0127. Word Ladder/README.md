# Solution Walk Through
https://leetcode.com/problems/word-ladder/

## Intuition
- construct adjaceny list first using all the words
- slow way is to check all possible combination of letters, and count the differences between each string. if the differences is 1 then its adjancent and its bidirectional, and if its not 1, not adjacent and skip ths one
- conduct a BFS to find shortest path, it will jsut be whichever path hits the end word the first, if we never hit it return 0
- dont need Dijkstras since each edge has equal weight of 1

## Approach

## Time Complexity
$O(edges^2 * k + (edges + n))$

## Space Complexity
$O(n)$



