# Solution Walk Through
https://leetcode.com/problems/find-kth-largest-xor-coordinate-value/

## Intuition
- Find the running XOR value at a given i, j by taking the xor of the 3 values behind it, i-1,j i, j-1 and i-1,j-1 and xor all of these together to get the current one along witht eh current squares value
- By xoring (i-1,j) and (i,j-1), we get the xor of all the sides, but since this is a rectangle, the overlapped regions will be canclelled out to be 0 since xor itself is 0, this is why we also need to xor i-1, j-1 with this to get all the values there as well
- Use a heap to store k values of the highest values weve seen from the heap, use a min heap or pq


## Approach


## Time Complexity
$O(n*mlogk)$

## Space Complexity
$O(k)$



