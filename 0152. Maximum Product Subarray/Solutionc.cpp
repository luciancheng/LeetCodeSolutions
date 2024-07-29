class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        // any zeroes we find essentially ruin the subarray, and we should restet the product whena  zero is reached
        // can still find a max even if we have a negative, since 2 negatives wil make it better
        // only issue is a 0, where we would need to restart the count
        double res = INT_MIN;
        double cur = 1;
        for (int i = 0; i < n; i++) {
            cur *= nums[i];
            res = max(cur, res);

            if (cur == 0) cur = 1;
        }
        cur = 1;
        for (int i = n - 1; i >= 0; i--) {
            cur *= nums[i];
            res = max(cur, res);

            if (cur == 0) cur = 1;
        }
        return res;
    }
};
