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
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode * > ans;
        unordered_set<int> s;
        for (const int i : to_delete) s.insert(i);
        dfs(root, s, ans, true);
        return ans;
    }

    void dfs(TreeNode * root, unordered_set<int> & to_delete, vector<TreeNode * > &  ans, bool parentDeleted) {
        if (!root) return;

        if (to_delete.count(root->val)) {
            dfs(root->left, to_delete, ans, true);
            dfs(root->right, to_delete, ans, true);
            return;
        }

        // continue dfs
        if (parentDeleted) {
            ans.push_back(root);
        }

        dfs(root->left, to_delete, ans, false);
        dfs(root->right, to_delete, ans, false);

        if (root->left) {
            if (to_delete.count(root->left->val) != 0) {
                root->left = NULL;
            }
        }

        if (root->right) {
            if (to_delete.count(root->right->val) != 0) {
                root->right = NULL;
            }
        }
    }
};
