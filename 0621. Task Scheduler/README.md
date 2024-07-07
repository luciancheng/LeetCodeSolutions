# Solution Walk Through
https://leetcode.com/problems/task-scheduler/

## Intuition
- want to prioritize the tasks with the highest count, since that will sort of bottleneck the time it takes to finish all tasks
- we can slot in other takss in between these tasks
- to keep track of the tasks with the highest count, use a max heap
- once a task is completed, add it to a queue and this will be of size n, after n time, once that task is popped out, we can do this task again since we must wait for a cooldown

## Approach
- use a map to count the occurences of each letter
- use a max heap to keep track of the remaining count of each letter that is available to be used (ie. not during its cooldown)
- tasks that are computed should be popped from the heap and added to the q, after n time, that will eb popped out of the queue and can be used again by putting it in the heap 

## Time Complexity
$O(n)$ - heap is log(26) since there are 26 differnet latters

## Space Complexity
$O(n)$



