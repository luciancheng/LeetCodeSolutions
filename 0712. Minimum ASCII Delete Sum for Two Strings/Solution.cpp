class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();

        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (s1[i] == s2[j]) {
                    dp[i + 1][j + 1] = dp[i][j] + s1[i];
                } else {
                    dp[i + 1][j + 1] = max(dp[i+1][j], dp[i][j+1]);
                }
            }
        }

        int LCSascii = dp[m][n];

        int s1_ascii = 0;
        int s2_ascii = 0;

        for (const int & i : s1) {
            s1_ascii += i;
        }
        
        for (const int & i : s2) {
            s2_ascii += i;
        }

        return s1_ascii - LCSascii + s2_ascii - LCSascii;
    }
};
