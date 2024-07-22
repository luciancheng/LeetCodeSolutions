class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        int l = 0;
        int r = n - 1;
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        int ans = 0;

        for (int i = 0; i < n; i++) {
            dp[i][i] = true;
            ans++;
        }

        for (int i = 0; i < n - 1; i++) {
            dp[i][i+1] = (s[i] == s[i+1]);
            ans += dp[i][i+1];
        }

        for (int size = 3; size <= n; size++) {
            for (int l = 0; l + size <= n; l++) {
                int r = l + size - 1;
                dp[l][r] = dp[l+1][r-1] && (s[l] == s[r]);
                ans += dp[l][r];
            }
        }
        return ans;
    }

};
