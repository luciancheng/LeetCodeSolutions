class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        dfs(candidates, target, {}, 0, ans, 0);
        return ans;
    }

    void dfs(vector<int> & candidates, int target, vector<int> cur, int cursum, vector<vector<int>> & ans, int idx) {
        if (cursum == target) {
            ans.push_back(cur);
            return;
        }
        if (cursum > target) {
            return;
        }

        for (int i = idx; i < candidates.size(); i++) {
            cur.push_back(candidates[i]);
            dfs(candidates, target, cur, cursum + candidates[i], ans, i);
            cur.pop_back();
        }
    }
};
