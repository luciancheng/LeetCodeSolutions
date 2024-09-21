class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        for (int i = 1; i <= 9; i++) {
            dfs(ans, i, n);
        }
        return ans;
    }

    void dfs(vector<int> & ans, int cur, int n) {
        // preorder traversal
        if (cur > n) return;
        ans.push_back(cur);

        for (int i = 0; i < 10; i++) {
            dfs(ans, cur * 10 + i, n);
        }

    }
};
