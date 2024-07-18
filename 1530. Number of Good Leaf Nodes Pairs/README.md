# Solution Walk Through
https://leetcode.com/problems/number-of-good-leaf-nodes-pairs/?envType=daily-question&envId=2024-07-18

## Intuition
- the shortest path between two children nodes will be through the lowest common ancestor, so that importants
- do a a bottom up dfs approach, where we can keep track of the depth and the count of nodes at that depth up til the max distance and iterate through these and multiply them if they are valid
- distance between two children will be the keys of the dictionary

## Approach
- if we are at a null node, return an empty hash map
- if we are at a child node, return a hashmap with mp[1] = 1, indicating that at depth 1, there are 1 nodes right now
- get the left and right dictionaries
- compare each key against each other and if the combined distance is <= distance, then multiply the values at those keys since all of those would be valid
- returning must merge both dictionaries, while also incrementing the key by 1 since going up the tree by 1 level will increase the height

## Time Complexity
$O(n * d^2)$

## Space Complexity
$O(n)$



