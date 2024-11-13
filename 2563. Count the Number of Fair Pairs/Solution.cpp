class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        
        // sorting doesnt matter, doesnt change the order, because it doesnt amtter which order we add them in
        // could be nums[i] + nums[j] or nums[j] + nums[i]

        sort(nums.begin(), nums.end());

        return countPairsBelowTarget(nums, upper + 1) - countPairsBelowTarget(nums, lower);
    }

    long long countPairsBelowTarget(vector<int> & nums, int target) {
        long long ans;

        int l = 0;
        int r = nums.size() - 1;

        while (l < r) {
            if (nums[l] + nums[r] < target) {
                ans += r - l;
                l++;
            } else {
                r--;
            }
        }

        return ans;
    }
}; 
