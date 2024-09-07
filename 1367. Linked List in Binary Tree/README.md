# Solution Walk Through
https://leetcode.com/problems/linked-list-in-binary-tree/?envType=daily-question&envId=2024-09-07

## Intuition
- do some sort of dfs binary tree traversal
- when matching the linked list, it needs to be consecutive nodes, either in the left or right direction, but doenst matter
- once we start checking, we must keep checking, cant be gaps

## Approach
- 2 recursive functions
- one for traversing the tree
- one for actually checking the linked list as we go down the tree
- if we reach the end of LL that means we are good
- end of tree is not correct
- and the overall result is the result of the left or right or the current node check

## Time Complexity
$O(n * k)$ - binary tree traversal takes n, but worst case is we traverse the linked list matching each time k times

## Space Complexity
$O(n * k)$ - call stack memory



