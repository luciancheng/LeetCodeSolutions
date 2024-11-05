# Solution Walk Through
https://leetcode.com/problems/add-bold-tag-in-string/?envType=company&envId=facebook&favoriteSlug=facebook-thirty-days&status=TO_DO

## Intuition
- Use a prefix tree to keep track of all valid words that deserve to be bolded
- Go through ever contiguous subsequence of letters in s at every index and keep going until we reached the end of the tree for that path, whenever we encounter a valid word, add that interval into a saved intervals list
- Problem now becomes to merge intervals, while also merging adjacent intervals also, ie. [1,2], [3,4] becomes [1,4]
- After merging all intervals, go through the string, if we ever encounter an interval that matches our current index, we need to bodl this substring, otherwise just add the character at i
- Keep an index at j to keep track of which interval we are on

## Approach

## Time Complexity
$O(n*k + n^2 + nlogn)$

## Space Complexity
$O(n)$



