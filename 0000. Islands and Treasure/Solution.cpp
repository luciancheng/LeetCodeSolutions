class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        queue<vector<int>> q;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // add all tresure chest squares then do a multisource bfs to compute the distance
                if (grid[i][j] == 0) {
                    q.push({i, j, 0});
                }
            }
        }

        while (!q.empty()) {
            vector<int> top = q.front();
            q.pop();

            int i = top[0];
            int j = top[1];
            int dist = top[2];

            vector<pair<int, int>> neighbours = {{i + 1, j}, {i - 1, j}, {i, j + 1}, {i, j - 1}};

            for (const auto & nei : neighbours) {
                int row = nei.first;
                int col = nei.second;
                // if square is in bounds, and we havent visited it before
                if (row >= 0 && col >= 0 && row < m && col < n && grid[row][col] == INT_MAX) {
                    q.push({row, col, dist + 1});
                    grid[row][col] = dist + 1;
                }
            }
        }
    }
};
