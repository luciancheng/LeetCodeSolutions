class Solution {
public:
    int numDistinct(string s, string t) {
        int m = s.size();
        int n = t.size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return dfs(s, t, 0, 0, dp);
    }

    int dfs(string s, string t, int i1, int i2, vector<vector<int>>& dp) {
        if (i2 == t.size()) return 1; // found a valid path here
        if (i1 >= s.size()) return 0; // went out of bounds of s

        if (dp[i1][i2] != -1) return dp[i1][i2];

        int res = 0;
        if (s[i1] == t[i2]) { // we can include it
            res += dfs(s, t, i1 + 1, i2 + 1, dp);
        }
        // skip
        res += dfs(s, t, i1 + 1, i2, dp);

        dp[i1][i2] = res;

        return res;
    }
};
