class Trie {
public:
    bool isWord = false;
    unordered_map<char, Trie*> letters;
    Trie() {}

    void addWord(string word) {
        Trie * cur = this;
        for (const char & i : word) {
            if (cur->letters.count(i) == 0) { // letter not present, make a new node the traverse
                cur->letters[i] = new Trie();
            }
            cur = cur->letters[i];
        }
        cur->isWord = true;
    }
};

class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        Trie * prefixtree = new Trie();
        for (const string & word : dictionary) {
            prefixtree->addWord(word);
        }
        int n = s.size();

        // use this prefix tree to do an optimized search, then do recursive backtracking to find the minimum number of bad letters
        vector<int> dp = vector<int>(n, -1);
        return dfs(s, prefixtree, 0, dp);
    }

    int dfs(string s, Trie * curTree, int idx, vector<int> & dp) {
        int n = s.size();
        if (idx >= n) return 0;

        if (dp[idx] != -1) return dp[idx];
        
        int res = s.size();
        Trie * cur = curTree;
        for (int i = idx; i < n && cur->letters.count(s[i]) != 0; i++) {
            cur = cur->letters[s[i]];
            if (cur->isWord) {
                res = min(res, dfs(s, curTree, i + 1, dp)); // pass in original tree so we start form checking at the top
            }
        }

        res = min(res, dfs(s, curTree, idx + 1, dp) + 1); // treat this as a invalid letter that we that doesnt fit

        dp[idx] = res;
        return res;
    }
};
