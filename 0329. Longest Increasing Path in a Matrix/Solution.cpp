class Solution {
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int ans = 0;
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans = max(ans, dfs(matrix, i, j, matrix[i][j], dp) + 1);
            }
        }
        return ans;
    }

    int dfs(vector<vector<int>> & matrix, int i, int j, int cur, vector<vector<int>> & dp) {
        if (dp[i][j] != -1) return dp[i][j];
        int res = 0;

        vector<vector<int>> neighbours = {{i + 1, j}, {i - 1, j}, {i, j + 1}, {i, j - 1}};

        for (const auto & nei : neighbours) {
            int row = nei[0];
            int col = nei[1];

            if (min(row, col) >= 0 && row < matrix.size() && col < matrix[0].size() && matrix[row][col] > cur) {
                res = max(res, dfs(matrix, row, col, matrix[row][col], dp) + 1);
            }
        }

        dp[i][j] = res;

        return res;
    }
};
