class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;

            int l = i + 1;
            int r = nums.size() - 1;
            int target = -nums[i];

            while (l < r) {
                int sum = nums[l] + nums[r];
                if (sum == target) {
                    ans.push_back({nums[l], nums[r], nums[i]});
                    l++;
                    while (nums[l] == nums[l-1] && l < r) l++;
                }
                else if (sum > target) {
                    r--;
                } else {
                    l++;
                }
            }
        }

        return ans;
    }
};
