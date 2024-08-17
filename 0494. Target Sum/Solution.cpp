class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        // in the recursive call, we have the choice to either add or subtract the current number
        int n = nums.size(); 
        vector<unordered_map<int, int>> dp(n);
        return dfs(nums, target, 0, dp);
    }

    int dfs(vector<int> & nums, int target, int idx, vector<unordered_map<int, int>>& dp) {
        if (idx == nums.size()) {
            if (target == 0) return 1;
            return 0;
        }

        if (dp[idx].count(target) != 0) return dp[idx][target];

        int res = 0;
        res += dfs(nums, target - nums[idx], idx + 1, dp);
        res += dfs(nums, target + nums[idx], idx + 1, dp);

        dp[idx][target] = res;

        return res; 
    }
};
