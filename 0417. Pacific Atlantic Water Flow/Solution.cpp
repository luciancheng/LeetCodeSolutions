class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m = heights.size();
        int n = heights[0].size();

        set<pair<int,int>> pacific, atlantic;

        vector<vector<int>> ans;

        for (int c = 0; c < n; c++) {
            dfs(0, c, pacific, heights[0][c], m, n, heights);
            dfs(m - 1, c, atlantic, heights[m - 1][c], m, n, heights);
        }

        for (int r = 0; r < m; r++) {
            dfs(r, 0, pacific, heights[r][0], m, n, heights);
            dfs(r, n-1, atlantic, heights[r][n-1], m, n, heights);
        }
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (pacific.count({i, j}) != 0 && atlantic.count({i, j}) != 0) {
                    ans.push_back({i, j});
                }
            }
        }

        return ans;
    }

    void dfs(int r, int c, set<pair<int,int>> & visited, int prevHeight, int m, int n, vector<vector<int>>& heights) {
        if (visited.count({r, c}) != 0 || r < 0 || c < 0 || r >= m || c >= n || heights[r][c] < prevHeight) return;

        visited.insert({r, c});

        dfs(r+1, c, visited, heights[r][c], m, n, heights);
        dfs(r-1, c, visited, heights[r][c], m, n, heights);
        dfs(r, c+1, visited, heights[r][c], m, n, heights);
        dfs(r, c-1, visited, heights[r][c], m, n, heights);
    }
};
