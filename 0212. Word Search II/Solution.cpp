class Trie {
public:
    string word;
    unordered_map<char, Trie*> letters;
    Trie() {
        word = "";
    }

    void addWord(string s) {
        Trie * cur = this;
        for (const char & letter : s) {
            if (cur->letters.count(letter) == 0) {
                cur->letters[letter] = new Trie();
            }
            cur = cur->letters[letter];
        }
        cur->word = s;
    }
};

class Solution {
public:
    bool inBounds(int r, int c, int m, int n) {
        return min(r, c) >= 0 && r < m && c < n;
    }

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        int m = board.size();
        int n = board[0].size();
        Trie * prefixTree = new Trie();
        vector<string> ans;
        unordered_set<string> s;

        for (const string & w : words) {
            prefixTree->addWord(w);
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // do a dfs on each square
                vector<vector<bool>> visited(m, vector<bool>(n, false));
                dfs(board, prefixTree, i, j, m, n, visited, s);
            }
        }

        for (const string & i : s) {
            ans.push_back(i);
        }
        return ans;
    }

    void dfs(vector<vector<char>> & board, Trie * prefixTree, int row, int col, int m, int n, vector<vector<bool>> & visited, unordered_set<string> & s) {
        if (prefixTree->word != "") {
            s.insert(prefixTree->word);
        }

        if (!inBounds(row, col, m, n)) return;
        if (visited[row][col]) return;
        if (prefixTree->letters.count(board[row][col]) == 0) return; // if the letter is not on the current level branch of the tree

        Trie * nextNode = prefixTree->letters[board[row][col]];
 
        visited[row][col] = true;

        dfs(board, nextNode, row + 1, col, m, n, visited, s);
        dfs(board, nextNode, row - 1, col, m, n, visited, s);
        dfs(board, nextNode, row, col + 1, m, n, visited, s);
        dfs(board, nextNode, row, col - 1, m, n, visited, s);

        visited[row][col] = false;
    }
};
