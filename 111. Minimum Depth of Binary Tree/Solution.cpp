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
    int minDepth(TreeNode* root) {
        // reached leaf = root->left and root->right == NULL
        if (root == NULL) return 0;
        if (root->left == NULL && root->right == NULL) {
            return 1;
        }

        int leftDepth = INT_MAX;
        int rightDepth = INT_MAX;

        if (root->left != NULL) {
            leftDepth = 1 + minDepth(root->left);
        }

        if (root->right != NULL) {
            rightDepth = 1 + minDepth(root->right);
        }

        return min(leftDepth, rightDepth);
    }
};
