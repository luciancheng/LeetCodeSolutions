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
    int total = 0;
    int sumNumbers(TreeNode* root) {
        dfs(root, 0);
        return total;
    }

    void dfs(TreeNode * root, int cur) {
        if (!root) return;
        if (!root->left && !root->right) {
            total += cur * 10 + root->val;
            return;
        }

        dfs(root->left, cur*10 + root->val);
        dfs(root->right, cur*10 + root->val);
    }
};
