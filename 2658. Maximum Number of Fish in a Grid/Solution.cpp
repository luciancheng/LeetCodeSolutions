class Solution {
public:
    bool inBounds(int r, int c, int m, int n) {
        return min(r,c) >= 0 && r < m && c < n;
    }

    int findMaxFish(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> visited(m, vector<int>(n, false));
        queue<vector<int>> q;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) {
                    visited[i][j] = true;
                } 
            }
        }

        int maxFish = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] != 0) {
                    q.push({i,j});
                    visited[i][j] = true;

                    int curFish = grid[i][j];

                    while (!q.empty()) {
                        vector<int> temp = q.front();
                        q.pop();
                        int r = temp[0];
                        int c = temp[1];

                        vector<vector<int>> neighbours = {{r+1, c}, {r, c+1}, {r-1, c}, {r, c-1}};

                        for (auto & nei : neighbours) {
                            int r2 = nei[0];
                            int c2 = nei[1];

                            if (inBounds(r2, c2, m, n) && !visited[r2][c2]) {
                                q.push({r2, c2});
                                curFish += grid[r2][c2];
                                visited[r2][c2] = true;
                            }
                        }
                    }

                    maxFish = max(curFish, maxFish);
                } 
            }
        }
        return maxFish;
    }
};
