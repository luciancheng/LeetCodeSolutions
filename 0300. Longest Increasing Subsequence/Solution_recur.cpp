class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int res = 0;
        unordered_map<int, int> dp;
        for (int i = 0; i < nums.size(); i++) {
            int cur = dfs(nums, i, dp);
            res = max(res, cur);
        }
        return res;
    }

    int dfs(vector<int> & nums, int idx, unordered_map<int, int> & dp) {
        if (idx == nums.size()) return 1;

        if (dp.count(idx) != 0) return dp[idx] + 1;

        int res = 0;
        int cur = nums[idx];

        for (int i = idx + 1; i < nums.size(); i++) {
            if (nums[i] > cur) {
                res = max(res, dfs(nums, i, dp));
            }
        }
        dp[idx] = res;

        return res + 1;
    }
};
