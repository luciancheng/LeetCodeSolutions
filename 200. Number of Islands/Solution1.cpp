// DFS solution
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
                    dfs(row, col, m, n, grid);
                    totalIslands++;
                }
            }
        }

        return totalIslands;
    }

    void dfs(int row, int col, int m, int n, vector<vector<char>> & grid) {
        if (!inBounds(row, col, m, n) || grid[row][col] != '1') return;
        grid[row][col] = '0';
        dfs(row+1, col, m, n, grid);
        dfs(row, col+1, m, n, grid);
        dfs(row-1, col, m, n, grid);
        dfs(row, col-1, m, n, grid);
    }
};
