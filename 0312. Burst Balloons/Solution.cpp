class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n = nums.size();

        vector<vector<int>> dp(n, vector<int>(n, -1));

        return dfs(nums, 0, n - 1, 1, 1, dp);
    }
    
    // inclusive l and right boundary
    int dfs(vector<int> & nums, int l, int r, int valleft, int valright, vector<vector<int>> &dp) {
        if (l > r) return 0; // overlapping

        if (dp[l][r] != -1) return dp[l][r];

        int res = 0;
        for (int i = l; i <= r; i++) {
            // for each of these numbers from l to r, see what happens if we pop i last from this remaining sublist
            int left = dfs(nums, l, i - 1, valleft, nums[i], dp);
            int right = dfs(nums, i + 1, r, nums[i], valright, dp);

            res = max(res, left + right + valleft * nums[i] * valright);
        }

        dp[l][r] = res;

        return res;
    }
};
