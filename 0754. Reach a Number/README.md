# Solution Walk Through
https://leetcode.com/problems/reach-a-number/description/

## Intuition
For a number of steps n, the maximum reachable value in any direction is equal to 1 + 2 + ... + n = n*(n+1)/2. so for a given target, a good place to start for checking should be a value n, where the cumulative sum is just greater than the target.
from here, we can conduct a binary search to see if this n value can create the target by setting l = 1, R = N and the mid to be the middle value in the range from 1 to n. we can get the total sum of n, and subtract 2*mid each time.
if the target < current sum, then the sum needs to be bigger, so we move our R down so we subtract a smaller number. if curSum > target, we can either move L up or if curSum - target is perfectly divisble by 2 and < mid*2, then this n value is good since
there is another number here that we can subtract to make it work

## Approach
- find the n using the equation
- do a binary search to see if this n can make the target
- if it cant, the move up to the next n

## Time Complexity
$O(nlogn)$

## Space Complexity
$O(1)$



