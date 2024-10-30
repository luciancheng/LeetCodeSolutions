class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int n = nums.size();
        vector<int> lisleft(n, 1); // increasing sub sequence
        vector<int> lisright(n , 1); // decreasing sub sequence

        // find increasing subsequence
        for (int i = 1; i < n; i++) {
            for (int prev = 0; prev < i; prev++) {
                if (nums[i] > nums[prev]) {
                    lisleft[i] = max(lisleft[i], lisleft[prev] + 1);
                }
            }
        }

        for (int i = n - 2; i >= 0; i--) {
            for (int prev = n - 1; prev > i; prev--) {
                if (nums[i] > nums[prev]) {
                    lisright[i] = max(lisright[i], lisright[prev] + 1);
                }
            }
        }

        int ans = n;
        for (int i = 1; i < n - 1; i++) {
            // find out which index has the longest increasing subsequence on both sides and that we can erase
            if (lisleft[i] > 1 && lisright[i] > 1) {
                int numremoveleft = (i + 1) - lisleft[i]; // find out how many numbers there are to the left, and subtracting this tells us how many to the left we need to remove
                int numremoveright = (n - i) - lisright[i]; // same here
                ans = min(ans, numremoveleft + numremoveright);
            }
        }
        
        return ans;
    }
};
