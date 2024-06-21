# Solution Walk Through
https://leetcode.com/problems/trapping-rain-water/

## Intuition
- for water to be trapped, it needs to have a left and right wall that is higher than the current height at index i
- but the water will only fill up as high as the minimum between the left and the right wall
- one method to solve this problem is keep track of the max hegiht of the left and right walls in sepearte arrays for each index i, since this will essentially bottleneck the amount of water that can be trapped
- we can also use 2 pointers and move them inwards based on the maxleft and max right we find, if maxleft < maxright, then move left++ else move right--
- when calcuating the amount of water to add, we just take the min between the maxL and maxR and subtract the height of the current index

## Approach
- initialize left and right pointers to be the start and end of the array
- initialize maxL to be the height at 0 and maxR to be the height at n-1
- move the pointers in accordingly, the one we move is the one we will count the water for until they are on top of eachother
- the sum of the water is our answer


## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



