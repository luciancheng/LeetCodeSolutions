class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        dfs(0, nums, ans, {});
        return ans;
    }

    void dfs(int idx, vector<int> nums, vector<vector<int>> & ans, vector<int> current) {
        ans.push_back(current);
        if (idx == nums.size()) {
            return;
        }

        for (int i = idx; i < nums.size(); i++) {
            current.push_back(nums[i]);
            dfs(i+1, nums, ans, current);
            current.pop_back();
        }
    }
};
