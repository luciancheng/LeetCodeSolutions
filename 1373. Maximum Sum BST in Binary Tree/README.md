# Solution Walk Through
https://leetcode.com/problems/maximum-sum-bst-in-binary-tree/description/?envType=company&envId=facebook&favoriteSlug=facebook-more-than-six-months

## Intuition
- Each recursive call, return {isvalid, sum, maxl, maxr}
- If we are at a leaf node, it will be a valid bst by itself,
- We start building the bst from the bottom up instead of checking from top down, where will need to do a brute force solution for that
- If the left and right subtrees are valid, and that the roots val is between the lefts maxr and the rights maxl, then this whole subtree is valid and we should return the sum of everything and reassign the maxl and maxr of this subtree to be the maxl of the left and maxr of the right
- If a branch doesnt exist, have default values for left and right subtrees return values which have a maxl and maxr that crosses over with the roots value node so it makes cleaner code and we can just check on that if we dont have any other data for it

## Approach

## Time Complexity
$O(n)$

## Space Complexity
$O(h)$



