# Solution Walk Through
https://leetcode.com/problems/k-closest-points-to-origin/

## Intuition
- use a heap to keep track of sorted distances of each point. the heap is a max heap, meaning the top element will be the point with the largest distance, and if we pop, we will be popping that one
- want the heap to be of size k, whenever we add an element, we need to push it to the heap, rearrange heap, and pop the top element to remain size k heap

## Approach
- for eahc point, calculate distance, add a pair of that and the index tot he heap
- pop elements out of the heap if the size is greater than k, and the remaining elements will be the k closest points up to that point

## Time Complexity
$O(nlogn)$ 

## Space Complexity
$O(n)$ 

