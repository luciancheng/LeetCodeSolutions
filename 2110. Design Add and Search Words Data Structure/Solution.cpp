class WordDictionary {
public:
    unordered_map<char, WordDictionary*> letters;
    bool isWord;
    WordDictionary() {
        isWord = false;
    }
    
    void addWord(string word) {
        WordDictionary* cur = this;
        for (const char & letter : word) {
            if (cur->letters.count(letter) == 0) {
                cur->letters[letter] = new WordDictionary();
            }
            cur = cur->letters[letter];
        }
        cur->isWord = true;
    }
    
    bool search(string word) {
        return recur(word, 0, this);
    }

    bool recur(string word, int idx, WordDictionary * node) {

        WordDictionary * cur = node;
        bool exists = false;
        int i = idx;
        for (i; i < word.size(); i++) {
            char letter = word[i];
  
            if (letter == '.') { // do a dfs from here
                for (const auto & [letter, wordnode] : cur->letters) {
                    exists |= recur(word, i+1, wordnode);
                }
                break; // no need to keep checking this instance of the call stack if there is a dot since we rely on the dot return now
            } else { // just do a normal check
                if (cur->letters.count(letter) == 0) {
                    return false;
                }
                cur = cur->letters[letter];
            }
        }
        if (i == word.size()) return cur->isWord;
        return exists;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
