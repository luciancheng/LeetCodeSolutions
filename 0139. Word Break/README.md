# Solution Walk Through
https://leetcode.com/problems/word-break/description/

## Intuition
- we can check all the words in the words list at the same time using a prefix tree
- use recursion to see all possible combinations of breaking up the word
- if we reach the index of the length of the string, we know that we have found all the words to make up the string
- for each recursive call, go down the prefix tree from the top, and every time we encounter a word in the prefix tree, starting at index i, we do another recursive call starting at the top of the tree again since we want to search for all words again
- ![image](https://github.com/user-attachments/assets/78ab230f-9b4b-4a9b-b302-9405c66aa491)


## Approach
- make a prefix tree data structure
- if idx == len of string, we have found an answer
- for each recursive call, traverse the prefix tree starting from the top and keep going until there are no more letters available
- when we reach a word as designated by the prefix tree, do another recursive call starting at the next index and starting search at the top of the prefix tree again
- the return result of a recursive level will be the OR of all of its dfs calls, as along as 1 dfs call returns true, it will propagate to the top level and that will be our answer
- use a dp hash map to memoize whether certain indices can become words to avoid repeated computation

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



