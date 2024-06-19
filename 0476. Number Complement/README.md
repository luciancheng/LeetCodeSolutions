# Solution Walk Through
https://leetcode.com/problems/number-complement/description/

## Intuition
- we can use the bitwise not operator to flip all of the bits we need, only issue here is that it will flip uncessary bits also past the ones that we actualyl need to represent the number so it will be negative
- we can create a mask by doing bit shifting with bitwise OR to make the mask as big as we need to represent our oriiginal number in terms of how many bits it is
- we can find out how many bits we need by taking log2(num)

## Approach
- find out how many bits we need by taking log2(num)
- create a mask of that many bits
- take the bitwise NOT and AND it with the mask to get the final value


## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



