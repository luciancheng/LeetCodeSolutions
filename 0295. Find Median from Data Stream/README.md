# Solution Walk Through
https://leetcode.com/problems/find-median-from-data-stream/

## Intuition
- we dont really care about the extreme numbers, we really only care about the middle numbers
- we can use two heaps to keep track of the middle-most numbers for us, by using a min heap and a maxheap
- maxheap will contain all numbers below the median, with the top being the closest to the middle
- the min heap will contain all numbers greater than the median with the top being the closest to middle
- [max heap --> top] middle [top <-- min heap]
- we can access the top of both heaps in o(1) time, need to keep both heaps roughly balanced in terms of size, meaning 1 heap size cannot be greater than 1 by the other heap size

## Approach
- when one heap has too many elements, remove an elmenet from that heap and add it to the other one to maintain parity in the distribution of elements

## Time Complexity
$O(logn)$ and $O(1)$

## Space Complexity
$O(n)$



