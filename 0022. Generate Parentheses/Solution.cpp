class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        dfs(n, 0, 0, ans, "");
        return ans;
    }

    void dfs(int n, int open, int closed, vector<string> & ans, string cur) {
        // cant have more closing brackets then open, must have <= closing brackets to open
        if (open == n && closed == n) {
            ans.push_back(cur);
            return;
        }

        if (closed > open) { 
            return;
        }

        if (closed > n || open > n) {
            return;
        }

       if (open == closed) {
            dfs(n, open + 1, closed, ans, cur + '(');
       } else {
            dfs(n, open + 1, closed, ans, cur + '(');
            dfs(n, open, closed + 1, ans, cur + ')');
       }
    }
};
