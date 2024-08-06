class Solution {
public:
    bool checkValidString(string s) {
        vector<vector<int>> dp(s.size(), vector<int>(s.size(), -1));
        return dfs(s, 0, 0, dp);
    }

    bool dfs(string & s, int idx, int numOpen, vector<vector<int>> & dp) {
        if (numOpen < 0) return false;
        if (idx == s.size()) {
            return numOpen == 0;
        }

        if (dp[idx][numOpen] != -1) return dp[idx][numOpen];

        char cur = s[idx];
        bool res = false;
        if (cur == '(') {
            res |= dfs(s, idx + 1, numOpen + 1, dp);
        } else if (cur == ')') {
            res |= dfs(s, idx + 1, numOpen - 1, dp);
        } else {
            res |= dfs(s, idx + 1, numOpen - 1, dp);
            res |= dfs(s, idx + 1, numOpen + 1, dp);
            res |= dfs(s, idx + 1, numOpen, dp);
        }

        dp[idx][numOpen] = res;

        return res;
    }
};
