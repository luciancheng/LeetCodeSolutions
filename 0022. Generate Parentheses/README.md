# Solution Walk Through
https://leetcode.com/problems/generate-parentheses/

## Intuition
- since this is a combination problem/permutation, we can use recursive backtracking
- we know that for a bracket set to be valid as we construct, each opening bracket must have a corresponding vlosign bracket
- we can keep track of hwo many open brackets we have and how many closed brackets we have
- we cannot have more closing brackets than open
- and we our open and closed brackets must be equal to n for it to be a viable answer

## Approach
- use recursive back tracking
- set up dfs with the number of open and closed brackets we have at each tieration
- if we have more closed than open, this is not valid
- our closed and open brackets are bounded by n
- if we have equal closed and open brackets, our next mvoe has to be an open bracket


## Time Complexity
$O(2^n)$

## Space Complexity
$O(n)$



