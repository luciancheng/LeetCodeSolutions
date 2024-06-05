// BFS solution

class Solution {
public:
    bool inBounds(int row, int col, int m, int n) {
        return min(row, col) >= 0 && row < m && col < n;
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int totalIslands = 0;

        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                queue<vector<int>> q;
                if (grid[row][col] == '1') { // unvisted bfs
                    q.push({row, col});
                    while (!q.empty()) {
                        vector<int> pos = q.front();
                        int row1 = pos[0];
                        int col1 = pos[1];
                        grid[row1][col1] = '0';
                        q.pop();
                        vector<vector<int>> neighbours = {{row1 + 1, col1}, {row1, col1+1}, {row1-1, col1}, {row1, col1-1}};

                        for (auto nei : neighbours) {
                            int row2 = nei[0];
                            int col2 = nei[1];

                            if (inBounds(row2, col2, m, n) && grid[row2][col2] == '1') {
                                q.push({row2, col2});
                            }
                        }
                    }
                    totalIslands++;
                }
            }
        }

        return totalIslands;
    }
};
