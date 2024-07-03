class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        dfs(0, nums, {}, ans);
        return ans; 
    }

    void dfs(int idx, vector<int> & nums, vector<int> cur, vector<vector<int>> & ans) {
        ans.push_back(cur);
        if (idx == nums.size()) return;

        int prev = INT_MIN;
        for (int i = idx; i < nums.size(); i++) {
            if (nums[i] == prev) {
                continue;
            }
            prev = nums[i];
            cur.push_back(nums[i]);
            dfs(i + 1, nums, cur, ans);
            cur.pop_back();
        }
    }
};
