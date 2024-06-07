# Solution Walk Through
https://leetcode.com/problems/replace-words/description/?envType=daily-question&envId=2024-06-07

## Intuition
we can brute force this making this O(L*W*N), where L is the length of the words in the dict, W is the number of words and N is the length of the sentence. we can just brutce force check every work against the dictionary and interate through if there is a valid root
A better approach is to use a prefix tree or trie to store each word in the dictionary so that we can check all words at once instead of one word at at time

## Approach
- make a new class Trie with pointers to other instances of the Trie class which will have edges being letters. also indicate if a current trie node is a word or not. make a function to add words to the trie O(W*L)
- Itearte through each word in the sentence and go through the trie simulatenously to see if they match and if they do, then keep searching until we reach the end of a word. if not, then just add the current word to the answer


## Time Complexity
$O(L*W + L*N)$

## Space Complexity
$O(L*W)$



