# Solution Walk Through
https://leetcode.com/problems/count-number-of-maximum-bitwise-or-subsets/?envType=daily-question&envId=2024-10-18

## Intuition
- the largest bitwise OR will just be the bitwise OR of everything in nums, since when you OR 2 numbers together, the result will be >= to the min of the original two, so OR 2 numbers will never yield a smaller number, so its good to just get all of them
- then with that, we can use recursion to count the number of unique ways we can reach the end of the array that have a curOR equal to the maxOR that we found earlier

## Approach
- use recursion to find the total result of all possible paths to the leaf of this recursive tree that have a curOR == maxOR
- at each recursive call we ahve 2 options, we can use this value for our total OR or we can skip this value, then in the end, each recursive call will have a unique path that it took to get to the end and if curOR == maxOR then we can reutrn 1, else return 0 if we have reached the end

## Time Complexity
$O(2^n)$ 2 choices at each step and there are n items in the list so it will be at most 2^n calls

## Space Complexity
$O(n)$



