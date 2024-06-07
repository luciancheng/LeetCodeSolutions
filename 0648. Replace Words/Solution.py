class Trie():
    def __init__(self):
        self.branches = {}
        self.word = ""
    
    def addWord(self, word):
        cur = self
        for letter in word:
            if letter not in cur.branches:
                cur.branches[letter] = Trie()
            cur = cur.branches[letter]
        cur.word = word

class Solution(object):
    def replaceWords(self, dictionary, sentence):
        """
        :type dictionary: List[str]
        :type sentence: str
        :rtype: str
        """
        trie = Trie()
        for word in dictionary:
            trie.addWord(word)
        
        ans = ""
        for word in sentence.split(' '):
            cur = trie
            foundWord = False
            for letter in word:
                if letter in cur.branches:
                    cur = cur.branches[letter]
                    if cur.word:
                        ans += cur.word + " "
                        foundWord = True
                        break
                else:
                    ans += word + " "
                    foundWord = True
                    break
            
            if not foundWord:
                ans += word + " "

        return ans[:-1]
        
