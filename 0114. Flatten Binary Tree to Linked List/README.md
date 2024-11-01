# Solution Walk Through
https://leetcode.com/problems/flatten-binary-tree-to-linked-list/?envType=company&envId=facebook&favoriteSlug=facebook-thirty-days

## Intuition
-Each recursive call, take the left and right subtree and they need to point to each other, the last element int he left needs to point to the beginning of the right. Then the roots right will now need to be its left
- If the left subtree exists, then we need to get to the last node in the left, by going through its right until its the end, then make this nodes next point to the right subtree initially
- After making root->right = left, and left->right = right, make sure that roots->left = NULL so we kill this path

## Approach

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



