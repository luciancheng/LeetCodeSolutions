# Solution Walk Through
https://leetcode.com/problems/koko-eating-bananas/

## Intuition
- the minimum max speed that is helpful would be the max element in the array since we can only do 1 index at a time without overflowing to next indices
- the slowest speed would be 1
- we are bound by 1 and 1e9 to find the best speed to eat it at
- for a given speed x, it can eat all the bananas in a pile in 1 move if the pile[i] <= x
- we can do a binary search to find the optimal speed to eat at by seeing how many hours it would take to eat at a certain speed and comparing it to our provided input h, which will let us adjust our searhc range

## Approach
- initialize l and r pointers to the min and max speed we can eat at, 1 and 1e9
- make a helper funciton to see how many hours it would take to eat a current speed we want to cehck out
- check at the speed of mid between l and r
- get the speed by iterating through array and taking the ceil of divide between number of pananas in the pile and the speed
- if the hours required to eat at speed mid is greater than our h, that means we ware eating too slow, we need to eat fast
- if we have <= h, then we are eating a fast speed, and we can afford to check slower speeds and save this speed in case this is the best

## Time Complexity
$O(2^n)$

## Space Complexity
$O(n)$



