# Solution Walk Through
https://leetcode.com/problems/exclusive-time-of-functions/?envType=company&envId=facebook&favoriteSlug=facebook-thirty-days

## Intuition
- if we have a current task running and we start another one, this extra task will be taking away run time from the original task which is equivalent to the total time that the additional task was running for, which will be marked as wasted time
- Use a stack to keep track of which tasks are currently ongoing 
- When we have a task start, add it to the stack
- When we have a task end, pop the last task from the top of the stack and calculate the total time difference,
- Have a wasted time variable to keep track of the time that is spent executing recursive or other thread starts-ends.
- Subtract this wasted time from the overall end - start time of that call to get that ID actual run time
- After we pop from the stack when there is an end, if the stack isnt empty, then the new top element of the stack will increment its wasted time by the time it spent from the start to end of the additional call that we just ended

## Approach

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



