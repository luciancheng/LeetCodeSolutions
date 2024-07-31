class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        unordered_map<int, int> dp;
        int n = nums.size();
        dp[n - 1] = 1;
        int ans = 1;
        for (int i = n - 2; i >= 0; i--) {
            int curNum = nums[i];
            int curSeq = 1;
            for (int j = i + 1; j < n; j++) {
                if (curNum < nums[j]) {
                    curSeq = max(curSeq, dp[j] + 1);
                    ans = max(curSeq, ans);
                }
            }
            dp[i] = curSeq;
        }
        return ans;
    }
};
