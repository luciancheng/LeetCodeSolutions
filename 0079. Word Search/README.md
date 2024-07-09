# Solution Walk Through
https://leetcode.com/problems/word-search/

## Intuition
- use a recursive backtracking approach to start at each grid spot, and recursively check if the letters beside it can form the letter or not
- need to keep track of visited cells for this specific recursion call so we dont end up back on squares that are already visited

## Approach
- if the current index we are checking is the size of the word, we have found the word
- if its out of bounds, been visited before or other, then this is a false path to check for the word
- have a 2d vector to keep track of visited cells
- set this current cell as visited
- do all 4 recursive calls
- after, set this current cell as available again for any future calls

## Time Complexity
$O(n*m * 4*n)$

## Space Complexity
$O(m*n)$



