# Solution Walk Through
https://neetcode.io/problems/meeting-schedule-ii

## Intuition
- want to iteratevely bucket meeting rooms together based on their compatability with each other
- for saved meetings, we only care about their end times when comparing them to out current intervals start time
- we can be greedy, traversing in sorted order first
- for each interval, we cant even add it to the earliest ending meeting from all of our buckets, then we must put this meeting on a new day

## Approach
- after sorting, use a heap to keep track of the number of days we currently have and the this will be a min heap that keeps track of the minimum end times amongst all days
- if there is no conflict between the current interval and the earliest end time, we can update that days end time with the new interval and reorganize the heap
- else we have to add a new instance
- the number of days will the size of the heap

## Time Complexity
$O(nlogn)$

## Space Complexity
$O(n)$



