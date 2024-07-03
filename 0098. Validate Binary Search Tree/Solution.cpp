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
    bool isValidBST(TreeNode* root) {
        vector<int> BST;
        dfs(root, BST);

        for (int i = 1; i < BST.size(); i++) {
            if (BST[i] <= BST[i - 1]) return false;
        }
        return true;
    }

    void dfs(TreeNode * root, vector<int> & BST) {
        if (!root) return;

        dfs(root->left, BST);
        BST.push_back(root->val);
        dfs(root->right, BST);
    }
};
