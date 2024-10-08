# Solution Walk Through
https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/?envType=daily-question&envId=2024-10-08

## Intuition
- for it to be balanced, we need it to be a proper set of brakcets, meaning that every open one needs to have a corresponding closed one
- a brakcet pair doesnt need to be touched if it has a corresponding open and closed bracket
- there is only an issue whenever we encounter more closed brakcets than opening
- if we encounter a spot where there is more closing than opening brakcets, we must make a swap, and the most optimal placed ot make a swap is to pick the opening brakcet closest to the end

## Approach
- keep a pointer to the opening bracket closed to the end, whenever we make a swap, we will move this pointer to the next closest opening bracket by decrementing it
- have a counter that keeps track of how many opening brackets we have seen, every open bracket we add one, every time we see a closing we subtract one
- if this counter falls below 0, that means that we dont have a corresponding opening bracket, meaning that this has to be swapped, and the optimal place to swap it is with an opening bracket that is closest to the end

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



