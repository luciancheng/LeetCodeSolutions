class Solution {
public:
    int nthUglyNumber(int n) {
        // must be divisible by either 2, 3, and 5 only
        // use a heap to keep track of the minimum values of the frontier to use as the current number to be multiplied
        vector<int> nums = {1};
        int i2 = 0, i3 = 0, i5 = 0;

        for (int i = 0; i < n - 1; i++) {
            int candidate = min(nums[i2] * 2, nums[i3] * 3);
            candidate = min(candidate, nums[i5] * 5);

            nums.push_back(candidate);

            if (candidate == nums[i2] * 2) {
                i2++;
            }
            if (candidate == nums[i3] * 3) {
                i3++;
            }
            if (candidate == nums[i5] * 5) {
                i5++;
            }
        }

        return nums[nums.size() - 1];
    }
};
