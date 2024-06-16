class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long maxReachable = 0;
        int moves = 0;
        int i = 0;
        int len = nums.size();

        while (maxReachable < n) {
            if (i < len && nums[i] <= maxReachable + 1) {
                maxReachable += nums[i];
                i++;
            } else {
                maxReachable += maxReachable + 1;
                moves++;
            }
        }
        return moves;
    }
};
