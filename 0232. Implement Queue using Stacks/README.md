# Solution Walk Through
https://leetcode.com/problems/implement-queue-using-stacks/?envType=daily-question&envId=2024-06-19

## Intuition
- use one stack to be the actual queue
- use the other stack as a temporary to perform operations

## Approach
- when we push, we should move all the elements of the q to the temp, add the new element to q and re add all values
- popping we can just pop the back from q stack
- the peek can just return the last element of the q stack

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



