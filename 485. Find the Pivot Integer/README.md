# Solution Walk Through
https://leetcode.com/problems/find-the-pivot-integer/?envType=daily-question&envId=2024-06-14

## Intuition
- we can use binary search to look for a mid point number where the left and right sides of it have the same sum
- use number theory, total sum = n*(n+1)/2

## Approach
- left and right pointers to either end of the number, 1 and n
- find the total sum of the range
- get the mid and calculate the sum of both ends
- if the right sum is bigger than left, then we need to move the left pointer past mid to inrease left sum
- otherwise, increase right sum by moving right pointer

## Time Complexity
$O(logn)$

## Space Complexity
$O(1)$



