# Solution Walk Through
https://leetcode.com/problems/step-by-step-directions-from-a-binary-tree-node-to-another/?envType=daily-question&envId=2024-07-16

## Intuition
- for the shortest path, it will have to cross the first common ancestor of the two nodes of interest
- we can keep a string which represents the path it takes to go down every branch of the tree, by adding an L if its going left and a R if it went right int he recursive calls
- since we know that it needs to cross the lowest common ancestor, that means that the first portions of the strings which represent the path to each node from the root are the same, we can get rid of it since it points to the same node
- we are only interestedin the part of the string afterwards that isnt the same
- the path to the starting node, can only go up while the path to the destination will just remain the same

## Approach
- create a dfs funciton passing in the current string which represents the path taken so far to reach each node
- global variables fro the start and end path when we reach it by setting it to cur
- iterate through both strings while its matching to find the first index where they dont match
- the starting node from that point to the end will only be UP and then join the rest of the destiniation down


## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



