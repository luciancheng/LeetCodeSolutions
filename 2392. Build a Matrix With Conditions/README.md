# Solution Walk Through
https://leetcode.com/problems/build-a-matrix-with-conditions/?envType=daily-question&envId=2024-07-21

## Intuition
- use topological sort to get the proper order of the numbers based on the specifications provided
- make a adjacnecy list for the topoligcial sort, then do a dfs at each of the source nodes.
- add to the order array in backwards order, meaning start by adding the values with no descendants and work backwards
- keep track of visited nodes so we dont add the same node back in to the order
- reconstruct the array using the ordering since the index of the row and col order can be used to determine where to place it in the k x k matrix

## Approach


## Time Complexity
$O(k^2*m + k^2*n + k)$

## Space Complexity
$O(m + n)$



