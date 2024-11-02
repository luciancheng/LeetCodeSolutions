# Solution Walk Through
https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/?envType=company&envId=facebook&favoriteSlug=facebook-thirty-days

## Intuition
- Brute force to use recursion and find all subsets by taking and skipping the current number until we reach the end with at least 1 element
- Better approach is to implement a sort and binary search
- Iterate through the entire array with i, and then conduct a binary seach of the rest of the array by setting l = i and r = n - 1
- We will find the number of subseuqneces with the lowest element being at i and the max being a certain index we will find
- Once we find the max idx where nums[i] + nums[mid] <= target, the number of subsequences from i to that idx is 2^(idx - i)
- We can add this power to our running sum
- We can do this since we arent looking to find every single unique subseuqnece but rather we are just counting, perhaps when we count we dont need to use recursion as it will save us space. When its asking for every unique subseuqnece then we might need to use recursion for this problem for backtracking
- SORT THEN BINARY SEARCH, if the array is ever sorted, binary search should always be considered


## Approach

## Time Complexity
$O(nlogn)$

## Space Complexity
$O(1)$



