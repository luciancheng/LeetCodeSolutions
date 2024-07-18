class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            nums[i] = max(i + nums[i], nums[i-1]);
        }

        int start = 0;
        int count = 0;
        while (start < n - 1) {
            count++;
            start = nums[start];
        }
        return count;
    }
};
