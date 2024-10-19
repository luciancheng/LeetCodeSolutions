# Solution Walk Through
https://leetcode.com/problems/find-kth-bit-in-nth-binary-string/?envType=daily-question&envId=2024-10-19

## Intuition
- once a bit is set, that bit doesnt change when we from one n to another n, meaning that if we wanted to find bit 0 at n = 3, it would be the same as in n = 2, n = 1
- dont need to do brute force if we use a recursive approach
- if the kth bit is the middle bit, of a given level we know that result will be 1
- if k > mid, then we need to return the 2*mid - k bit that is flipped

## Approach
- base case for n == 1 which returns 0
- calcualte the size which is 2^n - 1 which represents the size of the string at the nth level
- find the value which represents the mid
- if k is less than the mid, then jjust search for the same k value of the n - 1 string since that bit will be the same
- if k == mid, then return 1 because we know the middle value of a n will be 1
- if k > mid, then we wanted the flipped bit of the opposite side of k of the size of the string, which is mid - (k - mid). we want to get that bit and flip it which represents it so we can search at n = n -1, and k = mid - (k - mid)

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



