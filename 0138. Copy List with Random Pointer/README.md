# Solution Walk Through
https://leetcode.com/problems/copy-list-with-random-pointer/

## Intuition
First Solution
- map each node to an index first that represent its relative position in the og LL
- then using this mapping, go through again and see the index that the random matches to
- make a new LL and add it to a vector
- go through the random indexing and point it to the correct index on the new LL

Second solution
- use a hashmap to map the original node to a corresponding new node that will be used in the new LL
- after, go through and join the next and random pointers to the appropriate corresponding ones

## Approach

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



