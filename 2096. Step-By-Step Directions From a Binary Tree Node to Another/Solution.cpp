/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    string toStart = "";
    string toEnd = "";
    string getDirections(TreeNode* root, int startValue, int destValue) {
        string cur = "";
        dfs(root, startValue, destValue, cur);
        string ans = "";
        int i = 0;
        while (toStart[i] == toEnd[i]) {
            i++;
        }
        for (int j = i; j < toStart.size(); j++) {
            ans += 'U';
        }
        for (int j = i; j < toEnd.size(); j++) {
            ans += toEnd[j];
        }
        return ans;
    }

    void dfs(TreeNode * root, int startValue, int destValue, string & cur) {
        if (toStart.size() != 0 && toEnd.size() != 0) return;
        if (!root) return;

        if (root->val == startValue) toStart = cur;
        if (root->val == destValue) toEnd = cur;
        cur += 'L';
        dfs(root->left, startValue, destValue, cur);
        cur.pop_back();
        cur += 'R';
        dfs(root->right, startValue, destValue, cur);
        cur.pop_back();
    }

};
