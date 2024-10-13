# Solution Walk Through
https://leetcode.com/problems/kth-missing-positive-number/?envType=company&envId=facebook&favoriteSlug=facebook-thirty-days

## Intuition
- for a given k, we can find out how many mising numbers there are to the left of this current mid when dogin binary search by taking the mid number and ubstract the number of items to the left of it in the array
- using this value, if this is more than our k, we need to look to the left, if its less than k, we need to look to the right or higher up
- in the end, when we find out where the program ended, we can count how many missing numbers there are to the left of it, then subtract that from k and add this remaining value to the arr[r] at the remainder at the end

## Approach

## Time Complexity
$O(logn)$

## Space Complexity
$O(1)$



