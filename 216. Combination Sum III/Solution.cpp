class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> curVec;
        dfs(0, k, 0, n, ans, 1, curVec);
        return ans;
    }

    void dfs(int curK, int k, int curSum, int n, vector<vector<int>> & ans, int curNum, vector<int> curVec) {
        if (curK > k || curNum > 10 || curSum > n) return;
        if (curSum == n && curK == k) {
            ans.push_back(curVec);
        }
        for (int i = curNum; i < 10; i++) {
            curSum += i;
            curVec.push_back(i);
            dfs(curK + 1, k, curSum, n, ans, i + 1, curVec);
            curVec.pop_back();
            curSum -= i;
        }
    }
};
