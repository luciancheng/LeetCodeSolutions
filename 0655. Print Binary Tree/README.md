# Solution Walk Through
https://leetcode.com/problems/print-binary-tree/

## Intuition
We first want to get the height of the tree, and we can use this to determine the dimensions of the return vector. the tree will have m rows which is equal to the height of the tree and will ahve n columns equal to 2^m-1.
we can get the height of the tree by using a recursive function to get the max height.
With this, we can then find the starting position of the root node and go down the tree using a dfs approach and slowly replacing the vector and updating it with the correct values.
the root node will be palced at [row][(n-1)/2]
and its left and right children will be placed on the row below, and shifted to the left and right in columns by 2^(curheight-2).
if the current height is 0, then there is noting to place as its a null node. if the cur height is 1, then we should place the current value and return since there isnt anything else to place.
other wise, we want to recursively call and update the row and column to be placed

## Approach
- find the height using a dfs approach
- generate the shape of the vector
- recursively call to update the tree with the correct value using the spacing


## Time Complexity
$O(n)$

## Space Complexity
$O(n^2)$ - for return vector



