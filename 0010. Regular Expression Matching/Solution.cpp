class Solution {
public:
    bool isMatch(string s, string p) {
        vector<vector<int>> dp(s.size() + 1, vector<int>(p.size() + 1, -1));
        return dfs(s, p, 0, 0, dp);
    }

    bool dfs(string s, string p, int i, int j, vector<vector<int>> & dp) {
        if (i >= s.size() && j >= p.size()) return true;
        if (j >= p.size()) return false;

        if (dp[i][j] != -1) return dp[i][j];

        // checking if the letters match, either actually or with a period
        bool match = i < s.size() && (s[i] == p[j] || p[j] == '.');

        if (j + 1 < p.size() && p[j + 1] == '*') {
            // if no match || if there is a match, then keep checking with the star
            dp[i][j] = dfs(s, p, i, j + 2, dp) || (match && dfs(s, p, i + 1, j, dp)); // either take none or keep going down the route of taking one
            return dp[i][j];
        }
        // if there is a match, another path to take if regardless of if there is a * after is to just increment both i and j and treat it as accounted for
        if (match) {
            dp[i][j] = dfs(s, p, i + 1, j + 1, dp);
            return dp[i][j];
        }

        dp[i][j] = false;

        return false;

    }
};
