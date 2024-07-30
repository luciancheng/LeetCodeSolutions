class prefixTree {
    public:
    unordered_map<char, prefixTree *> letters;
    string isWord;
    prefixTree() {
        isWord = "";
    }

    void addWord(string word) {
        prefixTree * cur = this;
        for (const char & i : word) {
            if (cur->letters.count(i) == 0) {
                cur->letters[i] = new prefixTree();
            }
            cur = cur->letters[i];
        }
        cur->isWord = word;
    }
};

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        prefixTree * trie = new prefixTree();
        for (const string & word : wordDict) {
            trie->addWord(word);
        }
        unordered_map<int, bool> dp;
        dfs(s, wordDict, 0, trie, dp);
        return dp[0];
    }

    bool dfs(string s, vector<string>& wordDict, int idx, prefixTree * trie, unordered_map<int, bool> & dp) {
        if (idx == s.size()) {
            return true;
        }

        if (dp.count(idx) != 0) {
            return dp[idx];
        }

        bool res = false;
        prefixTree * cur = trie;
        for (int i = idx; i < s.size(); i++) {
            char curLetter = s[i];
            if (cur->letters.count(curLetter) != 0) {
                cur = cur->letters[curLetter];
            } else {
                break;
            }
            if (cur->isWord.size() > 0) {
                res |= dfs(s, wordDict, i + 1, trie, dp);
            }
        }
        dp[idx] = res;
        return res;
    }
};
