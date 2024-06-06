# Solution Walk Through
https://leetcode.com/problems/top-k-frequent-elements/

## Intuition
we can get a counter for get the frequency of each element since we want to return the k most frequent elements
once we have these, we can use a data structure that can keep our top k frequency numbers by using a priority queue.
we need to define our custom operator since our prioty queue will be containing vector<int> instead of just ints, so we need a custom comparison operator.
the vector being the number itself and the frequency
we will sort the pq based on the negative of the frequency so we can have the least frequent element be the top since it sorts it on decreasing order
if our pq size is ever bigger than k, we can just pop out the least frequent element being the top

## Approach
- create a map to count the frequency
- create a custom comparator operator for the priority queue
- insert vectors containing the number and the frequency to the priority queue in order of ascending frequency
- if the size of pq is ever greater than k, we can pop the top element (the least freq element)
- at then end, turn the ans back into a vector to return


## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



