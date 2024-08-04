class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();

        int totalSum = 0;
        for (const int & i : nums) totalSum += i;

        if (totalSum % 2 != 0) return false;

        vector<vector<int>> dp(n, vector<int>(totalSum + 1, -1));

        return dfs(0, nums, totalSum / 2, dp);
    }

    bool dfs(int idx, vector<int> & nums, int amt, vector<vector<int>> & dp) {
        if (amt == 0) return true;
        if (amt < 0 || idx >= nums.size()) return false;

        if (dp[idx][amt] != -1) return dp[idx][amt];

        bool res = false;

        res |= dfs(idx + 1, nums, amt - nums[idx], dp);
        res |= dfs(idx + 1, nums, amt, dp);

        dp[idx][amt] = res;

        return res;
    }
};
