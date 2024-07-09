class Solution {
public:
    bool inBounds(int i, int j, int m, int n) {
        return min(i, j) >= 0 && i < m && j < n;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (dfs(board, word, i, j, m, n, visited, 0)) return true;
            }
        }
        return false;
    }

    bool dfs(vector<vector<char>>& board, string word, int i, int j, int m, int n, vector<vector<bool>> & visited, int idx) {
        if (idx == word.size()) return true;
        if (!inBounds(i, j, m, n)) return false;
        if (visited[i][j]) return false;
        if (board[i][j] != word[idx]) return false;
        if (idx > word.size()) return false;

        visited[i][j] = true;
        bool ans = dfs(board, word, i + 1, j, m, n, visited, idx + 1) || dfs(board, word, i - 1, j, m, n, visited, idx + 1) || dfs(board, word, i, j + 1, m, n, visited, idx + 1) || dfs(board, word, i, j - 1, m, n, visited, idx + 1);
        visited[i][j] = false;
        return ans;
    } 
};
