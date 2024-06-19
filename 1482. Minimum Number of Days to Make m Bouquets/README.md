# Solution Walk Through
https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/?envType=daily-question&envId=2024-06-19

## Intuition
- Since this question is asking us to find the minimum days required and we are given a range of possible min and max numbers, being min(bloomdays) and max(bloomDays), we can use a binary search technique to find the lowest day that meets our requirements for m and k
- if the the number of boquets we can make on the mid day is >= m, then that means this day is valid so we should be checking smaller days
- if the number of quets we can amke on the mid day < m, then our day needs to be bigger
- for each one of the days, go through the bloomDay array and check how many boquets we can make

## Approach
- get the min and max of bloomDay and set those as the bounds for the binary search
- If the number of boquets made on the mid day >= m, check lower days, r = mid - 1, else l = mid + 1
- for each day we check, iterate through the array and have a counter keeping track of the current length of the subsequence that does not any values > the mid day, if there is, restart the coutner, if counter reaches k, restart also and increment the number of boquets by 1

## Time Complexity
$O(nlog(max(bloomDay))$

## Space Complexity
$O(1)$



