# Solution Walk Through
https://leetcode.com/problems/serialize-and-deserialize-binary-tree/

## Intuition
- to serialize it, convert it to a string with special characters to delimit the size of the number and special characters to break up the size from the actual number
- use a # character to identify the stopping chracter for reading length, and read that length of character afterwards which represent the actual nodes value

## Approach
- serialze it by doing a dfs and joining the string in the format of root left right, with each node being represented by {length}#{value}
- deserialize by using a helper funciton that returns a pair fo values which are the treenode root and an integer representing how far along we are in the parsing of the serialized string
- when doing the left subtree, the start index will be immedialely after the index we used to parse the current node
- the right subtree will start at the index of where the left index ended
- joint he left and right subtree to the root
- if we encoutner a null, return the null pointer and index which it ended
- at the end, return the pair of roots, and where the right pointer ended off

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



