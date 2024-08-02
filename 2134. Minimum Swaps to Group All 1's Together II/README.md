# Solution Walk Through
https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/?envType=daily-question&envId=2024-08-02

## Intuition
- the number of ones in the array wont change, and we want to find the number of swaps to get all the ones in consecutive order
- we can count the number of ones and look at a specific window and see how many ones we have and what the total number of ones is
- since we can swap 2 indices regardless of where they are, we can find out how many swaps is necessary to get all consecutive ones for this particular window by counting the number of 0s in the window
- the window needs to keep going until l < n or r < n + numOnes - 1
- get the minimum of the results

## Approach
- use sliding window, which will have a size fixed to the total number of ones in the array
- keep sliding and count how many 0s are in the current subarray, this will be the number of swaps required to get consecutive ones for this subarray starting at thie current position

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



