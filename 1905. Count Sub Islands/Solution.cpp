class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m = grid1.size();
        int n = grid1[0].size();

        int ans = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (grid2[i][j] == 1 && dfs(grid2, grid1, i, j)) {
                    ans++;
                }
            }
        }


        return ans;
    }

    bool dfs(vector<vector<int>>& grid2, vector<vector<int>>& grid1, int i, int j) {
        if (i < 0 || j < 0 || i >= grid2.size() || j >= grid2[0].size()) return true; // out of bounds, not technically wrong
        if (!grid2[i][j]) return true; // hit water

        if (!grid1[i][j]) return false;
        // only if grid1 at i and j is valid, do we set grid2 as visited or else we may create unintentional islands

        grid2[i][j] = 0;

        bool res = true;

        res &= dfs(grid2, grid1, i + 1, j);
        res &= dfs(grid2, grid1, i - 1, j);
        res &= dfs(grid2, grid1, i, j + 1);
        res &= dfs(grid2, grid1, i, j - 1);

        return res;    
    }
};
