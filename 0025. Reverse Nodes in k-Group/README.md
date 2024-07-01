# Solution Walk Through
https://leetcode.com/problems/reverse-nodes-in-k-group/description/

## Intuition
- Make a modified reverse function that takes in the head, and the end node. iteratvely reverse each node in that seciton untiol the current node reaches the end node, where we will just return the new head of that LL section
- want to recursively take the current head, and the end node and point the new tail to be the next sections new head
- the current head of this LL seciton will become the new tail once its reversed. point head->next to be the new head, which is the return value of the reverse function
- need to reverse LL first, before recursive call so that the current head is properly the tail node

![image](https://github.com/luciancheng/LeetCodeSolutions/assets/121974540/1cc1d8f2-8bf3-4e05-8e9c-cd7e91c4ca72)

## Approach
- create modified reverse function taking head and end pointers
- from the current head, move to k next nodes and that end node will be the limit of the reverse
- if we cant go k nodes, then that is the last seciton and we can just return the head
- reverse from current head to end and get the return value of the hew head
- re assign the head next value to be the recursive call to the funciton, with the next head being the end pointer
- return new head from reverse

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



