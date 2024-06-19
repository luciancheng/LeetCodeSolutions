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
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        // do a dsf and keep track fot eh current depth, if the durrent depth is not in the ans vector, then push it in and keep changing the index
        dfs(ans, root, 0);

        return ans;
    }

    void dfs(vector<int> & ans, TreeNode * root, int depth) {
        if (root == NULL) return;

        if (ans.size() - 1 < depth || ans.empty()) { // add a new index for the current row
            ans.push_back(root->val);
        } else {
            ans[depth] = max(ans[depth], root->val);
        }

        dfs(ans, root->left, depth + 1);
        dfs(ans, root->right, depth + 1);
    }
};
