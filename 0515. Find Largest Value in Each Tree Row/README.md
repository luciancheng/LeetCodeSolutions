# Solution Walk Through
https://leetcode.com/problems/find-largest-value-in-each-tree-row/

## Intuition
- we can use a BFS or DFS approach to find the maximum of each row
- BFS can be used since we can just keep track of the current row we are checking since BFS goes row by row instead of depth, once a row depth changes, we can just add the largest number found from that row to the ans vector
- DFS can be used by passing through the current depth of tree to its children node and if the ans vector hasnt seen this row before, in terms of index, then we can just append a new value to the ans, but if we ahve seen this row before, take the max of the values

![image](https://github.com/luciancheng/LeetCodeSolutions/assets/121974540/0cc38343-5629-49e6-bb15-a99d508b8388)


## Approach
- recursively call DFS while checking the current max value of a given row 


## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



