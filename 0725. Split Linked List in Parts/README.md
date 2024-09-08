# Solution Walk Through
https://leetcode.com/problems/linked-list-in-binary-tree/description/?envType=daily-question&envId=2024-09-07

## Intuition
- A very useful thing to have here is to have the size of the linekd list, since this will make the partitioning a lot easier using the given k
- since we need to try and split it as evenly as possible, with some getting only 1 extra more node, we can use the division and modulus operators to find out the required size of each sub section
- for example, with N = 10 and k = 3, we find out that the minimum size of each subsection needs to be 10/3 = 3 and the number of secitons that will have an extra piece will be 10 % 3 = 1 (first section)
- We can just iterate through using these numbers to partition the LL, making sure that each iteartion we check if cur has reached a null or not to prevent us from continuing

## Approach
- iterate through to get size of LL
- calculate the minimum size of each partition and the number of partitions that will have an extra node using / and %
- itearte through and set the ans[i] to be the cur pointer which is the start of a new section, up to the appropraiate segment size - 1
- decrement the number of extra paritions we have by 1 each time we use it
- make sure to set cur->next = null at the end of a partition

## Time Complexity
$O(n)$

## Space Complexity
$O(k)$



