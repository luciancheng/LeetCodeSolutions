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
    void flatten(TreeNode* root) {
        // pre order traversal
        // easy approach is to convert binary tree to a list then go throguh and rearrange it
        dfs(root);
    }

    TreeNode * dfs(TreeNode * root) {
        if (!root) return NULL;

        // root always points to left,
        // left will point to right

        TreeNode * left = dfs(root->left);
        TreeNode * right = dfs(root->right);

        if (left) {
            // the right most node in the left must be pointing tot he right
            TreeNode * cur = left;

            while (cur->right) {
                cur = cur->right;
            }

            cur->right = right;
            root->right = left;
            root->left = NULL;
        } 

        return root;
    } 
};
