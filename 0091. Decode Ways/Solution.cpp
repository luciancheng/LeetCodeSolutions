class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        unordered_map<int, int> dp;
        dp[n] = 1;
        return dfs(0, s, n, dp);
    }

    int dfs(int i, string s, int n, unordered_map<int, int>& dp) {
        if (dp.count(i)) return dp[i]; /// if its been cached or weve reached the end since basecase is at n : 1
        if (s[i] == '0') return 0; // no way to decode a substring or if the current i is at a 0 

        // rest of i here are not cached yet or i
        int res = dfs(i + 1, s, n, dp);

        if (i + 1 < n) {
            if (s[i] == '1') {
                // we can afford to do recursive call on the next number
                res += dfs(i + 2, s, n, dp);
            } else if (s[i] == '2') {
                if (s[i + 1] >= '0' && s[i+1] <= '6') {
                    res += dfs(i + 2, s, n, dp);
                } 
            }
        }

        dp[i] = res;

        return res;
    } 
};
