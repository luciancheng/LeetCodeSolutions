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
    bool valid = false;
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        dfs(root, subRoot);
        return valid;
    }

    void dfs(TreeNode * root, TreeNode * subRoot) {
        if (!root) {
            return;
        }
        valid |= check(root, subRoot);

        dfs(root->left, subRoot);
        dfs(root->right, subRoot);
    }

    bool check(TreeNode* root, TreeNode* subRoot) {
        if (!root && !subRoot) {
            return true;
        }

        if (!root || !subRoot) {
            return false;
        }

        if (root->val != subRoot->val) {
            return false;
        }

        bool leftValid = check(root->left, subRoot->left);
        bool rightValid = check(root->right, subRoot->right);

        return leftValid && rightValid;
    }
};
