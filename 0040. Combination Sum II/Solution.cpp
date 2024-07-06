class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        dfs(candidates, target, 0, {}, 0, ans);
        return ans;
    }

    void dfs(vector<int> & candidates, int target, int curSum, vector<int> cur, int idx, vector<vector<int>> & ans) {
        if (curSum == target) {
            ans.push_back(cur);
            return;
        }
        if (curSum > target) {
            return;
        }

        int prev = 0;
        for (int i = idx; i < candidates.size(); i++) {
            if (candidates[i] != prev) {
                if (candidates[i] > target) continue;
                cur.push_back(candidates[i]);
                dfs(candidates, target, curSum + candidates[i], cur, i + 1, ans);
                cur.pop_back();
            }
            prev = candidates[i];
            
        }
    }

};
