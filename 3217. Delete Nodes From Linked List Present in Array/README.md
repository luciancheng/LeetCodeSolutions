# Solution Walk Through
https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/?envType=daily-question&envId=2024-09-06

## Intuition
- use a hashset to contain all of the ndoes we want to delete so when we get to a node we can just have constnat time look up
- this lets us just iterate through
- when we find a node that we dont want, keep pushing that pointer until it is a node that we need and then set the previous node tot his current node

## Approach
- create a dummy head that is a pointer to the head
- have a prev and a cur pointer, when cur is a node we want to delete, keep pushing cur over until its a node we want then set prev next to be cur and increment both
- if cur becomes null, set prev next to be null then break out of the loop
- return dummys next, prev starts off at dummy, so when we assign the first head, it will be the first node we want to keep and then we increment both pointers

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



