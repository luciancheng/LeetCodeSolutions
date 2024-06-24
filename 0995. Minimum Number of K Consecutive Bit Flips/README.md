# Solution Walk Through
https://leetcode.com/problems/minimum-number-of-k-consecutive-bit-flips/?envType=daily-question&envId=2024-06-24

## Intuition
- we can be greedy with the bit flipping, by only flipping bits in front of the current index and assuming that everything behind is a 1
- keep track of the true value of every bit by storing the index that we flipped in a queue and using the length of the queue
- once we go past the front index of the q + k, then we can remove it since it wil not longer have an effect on bit flipping the current bit
- if the last numbers true value isnt a 1, then we return -1, else we return the number of flips

## Approach
- whenever the true value is a 0, then add this index to the q and add 1 to our flips
- if we go past the front of the q + k, then pop it out

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



