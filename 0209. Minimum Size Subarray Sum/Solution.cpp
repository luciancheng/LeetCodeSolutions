class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int cursum = 0;
        int length = INT_MAX;
        bool found = false;

        int l = 0;
        for (int r = 0; r < nums.size(); r++) {
            cursum += nums[r];

            while (cursum >= target) {
                found = true;
                length = min(length, r - l + 1);
                cursum -= nums[l];
                l++;
            }
        }

        if (found) return length;
        return 0;
    }
};
