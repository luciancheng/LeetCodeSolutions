# Solution Walk Through
https://leetcode.com/problems/balance-a-binary-search-tree/?envType=daily-question&envId=2024-06-26

## Intuition
- getting an array of all the numbers in the search tree would be a good place to start, since we can essentially recreate a search tree using a sorted array
- With a sorted array, we know that for the tree to be balanced, the most optimal node to pick as the root, would be the middle value, which can be obtained by doing (l + r) / 2, such as in binary search
- if we keep going down this route and shrinking the range where we calculate the mid number by moving the l and r pointers based on the child we want, we can reconstruct the tree properly

![image](https://github.com/luciancheng/LeetCodeSolutions/assets/121974540/21152876-a330-4978-88e0-eda7764ab83f)


## Approach
- use inorder traversal to get all the nodes into a sorted array
- get the l and r pointers to the opposite ends of this array
- create a helper function to create the binary tree
- we will create the node using the value found at mid = (l + r) / 2
- the left sub tree will always be less, so the new l and r pointers will be l and mid - 1, since we dont want to include mid in this part anymore since we just used it
- the right subtree will only be bigger than mid, so new pointers become mid + 1, r

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



