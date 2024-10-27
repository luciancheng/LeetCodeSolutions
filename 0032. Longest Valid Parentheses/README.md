# Solution Walk Through
https://leetcode.com/problems/longest-valid-parentheses/?envType=company&envId=facebook&favoriteSlug=facebook-thirty-days

## Intuition
- Use a stack to keep track of indices of opening brackets
- Intialize the stack to start off with -1 since this is the base case that if we fully use the entire string, this point will let us find the ans when subtracting
- When we encounter an open bracket, push its index on to the stack
- If we find a closing bracket pop the top element from the stack, if the stack becomes empty after this pop, this means that the closing bracket was not a valid closing bracket since there wasnt a corresponding opening one, so we need to push the current index back onto it a reset to the stack for future counting
- Whenever we pop, the total distance will be the current index i - the index at the top of the stack, since everything from the top index to i has already been cleared and is valid

## Approach

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



