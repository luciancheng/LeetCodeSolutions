class Solution {
public:
    void solve(vector<vector<char>>& board) {
        // do graph traversal, start a O, and keep going to other Os, if we ever go out of bounds, that means that O section is not surrounded so we dont fill it in, if it is fully surrounded, then change them X
        int m = board.size();
        int n = board[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                set<pair<int,int>> path;
                if (dfs(board, i, j, path)) {
                    for (const auto &[r, c] : path) {
                        board[r][c] = 'X';
                    }
                }
            }
        }
    }

    bool dfs(vector<vector<char>> & board, int i, int j, set<pair<int, int>> & path) {
        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size()) return false; // this squares is not fulyl surrounded, meaning the whole component isnt connected either
        if (path.count({i,j}) != 0) return true;  // already checked this path

        if (board[i][j] == 'X') return true; // this side is connected

        path.insert({i,j}); // add path of O to the set, change these later

        bool res = true;

        vector<pair<int,int>> neighbours = {{i + 1, j}, {i - 1, j}, {i, j + 1}, {i, j - 1}};

        for (const auto & [row, col] : neighbours) {
            res &= dfs(board, row, col, path);
        }

        return res;
    }
};
