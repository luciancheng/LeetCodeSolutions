# Solution Walk Through 
https://leetcode.com/problems/jump-game-ii/

## Intuition
- we want to figure out the maxmimum reach from every index
- the first index will ahev a reach of nums[0]
- for every subsequent index, we want to replace nums[i] with the maximum between nums[i-1] or i + nums[i], depending on whichever one gives us the larger leap forward
- we can propagate this through til the end, and once the indices have been replaced, we can just traverse the array hopping from each i to nums[i] and counting how much jumps it takes since that will always yield the most optimal solution

## Approach
- do a greedy approach by starting at i = 1, and itearting til the end, replacing nums[i] with max(nums[i-1], i + nums[i]) to see which one has a bigger reach

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



