class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        for (int i = 2; i < n; i++) {
            nums[i] += max(nums[i - 2], (i > 2) ? nums[i - 3] : 0);
        }
        if (n == 1) return nums[0];
        return max(nums[n - 1], nums[n - 2]);
    }
};
