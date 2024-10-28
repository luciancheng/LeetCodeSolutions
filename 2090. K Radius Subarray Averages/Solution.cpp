class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        // exepected elements in the array should be 2*k + 1
        // sliding window
        long cursum = 0;

        vector<int> ans;

        int n = nums.size();

        if (2 * k + 1 > n) {
            return vector<int>(n, -1);
        }

        for (int i = 0; i < k; i++) {
            ans.push_back(-1);
        }
        int l = 0;
        for (int r = 0; r < n; r++) {
            cursum += nums[r];

            if (r - l + 1 > 2*k + 1) {
                cursum -= nums[l];
                l++;
            }
            if (r - l + 1 == (2 * k + 1)) {
                int res = cursum / (2 * k + 1);
                ans.push_back(res);
            } 
        }

        // add k amount of -1 to beginning and end
        for (int i = 0; i < k; i++) {
            ans.push_back(-1);
        }

        return ans;

    }
};
