class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);
        if (n == 3) {
            int cur = nums[0];
            cur = max(nums[1], cur);
            cur = max(nums[2], cur);
            return cur;
        }

        return max(helper(nums, 0, n-1), helper(nums, 1, n));
    }

    int helper(vector<int> & nums, int start, int end) {
        int rob1 = 0;
        int rob2 = 0;

        for (int i = start; i < end; i++) {
            int newRob = max(rob1 + nums[i], rob2);
            rob1 = rob2;
            rob2 = newRob;
        }
        return rob2;
    }
};
