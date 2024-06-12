class Solution {
public:
    int modulo = pow(10, 9) + 7;
    int numTilings(int n) {
        vector<vector<long long>> dp(n, vector<long long>(n, -1));
        long long ans = dfs(n, 0, 0, 0, dp);

        return ans % modulo;
    }

    long long dfs(int n, int topidx, int bottomidx, int curFilled, vector<vector<long long>> & dp) {
        if (topidx == n && bottomidx == n && curFilled == 2*n) {
            return 1;
        }
        if (topidx >= n || bottomidx >= n) return 0;

        if (dp[topidx][bottomidx] != -1) {
            return dp[topidx][bottomidx];
        }

        if (dp[bottomidx][topidx] != -1) {
            return dp[bottomidx][topidx];
        }

        // [0] is increment for top index, [1] is increment for bottom index
        vector<vector<int>> pieces = {{1, 1}, {2,2}, {2, 1}, {1, 2}};
        long ans = 0;
        if (topidx == bottomidx) {
            for (auto piece : pieces) {
                ans += dfs(n, topidx + piece[0], bottomidx + piece[1], curFilled + piece[0] + piece[1], dp);
            }
        } else if (topidx - bottomidx == 1) { // top extends further
            ans += dfs(n, topidx + 1, bottomidx + 2, curFilled + 3, dp);
            ans += dfs(n, topidx, bottomidx + 2, curFilled + 2, dp);
        } else if (bottomidx - topidx == 1) { // bottom extends further
            ans += dfs(n, topidx + 2, bottomidx + 1, curFilled + 3, dp);
            ans += dfs(n, topidx + 2, bottomidx, curFilled + 2, dp);
        }

        dp[topidx][bottomidx] = ans % modulo;
        dp[bottomidx][topidx] = ans % modulo;

        return ans % modulo;

    }
};
