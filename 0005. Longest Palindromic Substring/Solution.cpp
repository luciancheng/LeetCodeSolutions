class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int biggestSize = 1;
        int n = s.size();

        vector<vector<bool>> dp(n, vector<bool>(n, false));

        for (int i = 0; i < n; i++) {
            dp[i][i] = true;
        }

        for (int i = 0; i < n - 1; i++) {
            bool res = (s[i] == s[i+1]);
            dp[i][i+1] = res;
            if (res) {
                biggestSize = 2;
                start = i;
            }
        }

        for (int size = 3; size <= n; size++) {
            for (int l = 0; l + size <= n; l++) {
                int r = l + size - 1;
                bool res = (s[l] == s[r]) && dp[l+1][r-1];
                dp[l][r] = res;
                if (res && size > biggestSize) {
                    start = l;
                    biggestSize = size;
                }
            }
        }
        return s.substr(start, biggestSize);
    }
};
