# Solution Walk Through
https://leetcode.com/problems/maximum-length-of-pair-chain/

## Intuition
Sorting the array makes it a lot easier to work with as we can iterate in order of left value. we can save the value of the previous right value and compare that with the current left. if the current left is greater than the right, then we can add an additional pair.
if its not, then we should the lowest right value out of all the ones weve see from the previous right value switch to now since that will give us the a better chance of finding another acceptable link

## Approach
- sort array
- itearte through wtih a prevRight value to keep track of the smallest right value for this current number of links.
- if our current left value is greater than the previous right, we can increase the number of links by 1 and update the previous right value. if the left is not greater than previous right, then the previous right needs to be the minimum of all the new visited right values

## Time Complexity
$O(nlogn)$

## Space Complexity
$O(n)$



