class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int m = s1.size();
        int n = s2.size();
        if (m + n != s3.size()) return false;
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
        return dfs(s1, s2, s3, 0, 0, dp);
    }

    bool dfs(string s1, string s2, string target, int is1, int is2, vector<vector<int>> & dp) {
        // dont need a var to keep track of current idxot target, can just sum up is2 and is2
        if (is1 + is2 == target.size()) return true; // reached the end
        if (s1[is1] != target[is1 + is2] && s2[is2] != target[is1 + is2]) return false; // found a bad path, no need to keep checking since both current pointers arent the same as the target

        if (dp[is1][is2] != -1) return dp[is1][is2];

        bool res = false;

        // can increment s1 index if the current value is the same as the current target value
        if (is1 < s1.size() && s1[is1] == target[is1 + is2]) {
            res |= dfs(s1, s2, target, is1 + 1, is2, dp);
        }

        // can increment s2 index if the current value is the same as the current target value
        if (is2 < s2.size() && s2[is2] == target[is1 + is2]) {
            res |= dfs(s1, s2, target, is1, is2 + 1, dp);
        }

        dp[is1][is2] = res;

        return res;
    }
};
