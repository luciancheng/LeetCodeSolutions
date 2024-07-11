class Solution {
public:
    bool inBounds(int row, int col, int m, int n) {
        return min(row, col) >= 0 && row < m && col < n;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int fresh = 0;
        int rotting = 0;
        int m = grid.size();
        int n = grid[0].size();
        int time = 0;

        queue<vector<int>> q;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) fresh++;
                if (grid[i][j] == 2) {
                    rotting++;
                    q.push({i, j, 0}); // starting at minute 0
                }
            }
        }
        if (fresh == 0) return time;

        while (!q.empty()) {
            vector<int> top = q.front();
            q.pop();
            int row = top[0];
            int col = top[1];
            int curTime = top[2];
            time = max(time, curTime);

            vector<vector<int>> neighbours = {{row + 1, col}, {row - 1, col}, {row, col + 1}, {row, col - 1}};

            for (auto nei : neighbours) {
                int row2 = nei[0];
                int col2 = nei[1];
                if (inBounds(row2, col2, m, n) && grid[row2][col2] == 1) {
                    fresh--;
                    grid[row2][col2] = 2;
                    q.push({row2, col2, curTime + 1});
                }
            }
        }
        if (fresh > 0) return -1;
        return time;
    }
};
