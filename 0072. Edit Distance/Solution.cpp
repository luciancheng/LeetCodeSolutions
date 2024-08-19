class Solution {
public:
    int minDistance(string word1, string word2) {
        // at each step, 3 choices, insert, delete or replace
        int m = word1.size();
        int n = word2.size();

        vector<vector<int>> dp(m, vector<int>(n, -1));

        return dfs(word1, word2, 0, 0, dp);
    }

    int dfs(string word1, string word2, int i1, int i2, vector<vector<int>>& dp) {
        if (i2 == word2.size()) return word1.size() - i1; // found a combination that reaches the end of i2, return whatever is left of word1 since we will need to delete whatever is left

        if (i1 == word1.size()) return word2.size() - i2; // reached the end of i1, return whatever is left over from i2, this leftover is what we have to insert

        if (dp[i1][i2] != -1) return dp[i1][i2];

        int res = 500; 
        if (word1[i1] == word2[i2]) {
            res = dfs(word1, word2, i1 + 1, i2 + 1, dp); // increment both if the current letter matches
        } else { // current letters do not match, have 3 choices to make
            // replace
            res = min(res, dfs(word1, word2, i1 + 1, i2 + 1, dp) + 1); // make the letters match

            // remove
            res = min(res, dfs(word1, word2, i1 + 1, i2, dp) + 1); // "delete" letter at i1, increment i1 to count it as deleted

            // insert
            res = min(res, dfs(word1, word2, i1, i2 + 1, dp) + 1);
        }

        dp[i1][i2] = res;

        return res;
    }
};
