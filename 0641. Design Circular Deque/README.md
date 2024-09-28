# Solution Walk Through
https://leetcode.com/problems/design-circular-deque/?envType=daily-question&envId=2024-09-28

## Intuition
- easy implementation is to make a DLL by making a new class to act as a node with pointers to the next and previous with a header and trailer pointer
- optimal is to use an array of size n with pointers to the head and the tail
- the head points to the current head, and the tail points to the next spot to place an item if its inserted at the tail

## Approach
- for head insertion, decrement head pointers then add
- for tail insertion, add at tail then increment
- for head deletion, just increment head pointer, decrement the size
- for tail deletion, decrement tail, decrement the size
- for all these operations, be sure to stay without bounds, by modding by the max size

## Time Complexity
$O(1)$

## Space Complexity
$O(n)$



