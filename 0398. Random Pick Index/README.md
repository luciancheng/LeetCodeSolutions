# Solution Walk Through
https://leetcode.com/problems/random-pick-index/?envType=company&envId=facebook&favoriteSlug=facebook-thirty-days

## Intuition
- since we want to pick a random index that has a value of target, we should get all indices that havea  value of target into a list
- use a hashmap with the key as the value in the array and the value as a list of indices that contain that value
- when we wantt or etrieve an index, just get the list of indices of that target and return a random one by using rand() % n to get a value between 0 and n - 1

## Approach

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



