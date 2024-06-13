# Solution Walk Through
https://leetcode.com/problems/earliest-possible-day-of-full-bloom/description/

## Intuition
Looking at this, to find the minimum day needed, we should be maximizing the amount of time we spend planting while another plant is in its growing phase. more overlaps = more time saved. 
My first thought is to sort by growing time and initially tackle the plants that have the longest growing time first since this gives us more time to plant other plants. and we can work our way down and take the maximum day we see

## Approach
- Make a pair that represents the grow time and plant time of each plant.
- sor tthis by grow time
- start with the plants with the longest grow time
- andf just find the maximum day it would day take to ake all these plants bloom by taking the max between your curernt highest day and the current day + growtime + planttime

## Time Complexity
$O(nlogn)$

## Space Complexity
$O(n)$



