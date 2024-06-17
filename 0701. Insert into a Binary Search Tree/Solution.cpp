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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == NULL) {
            root = new TreeNode;
            root->val = val;
        } else {
            insertNode(root, val);
        }
        
        return root;
    }

    void insertNode(TreeNode * root, int val) {  
        if (val > root->val) { // move to right subtree
            if (root->right != NULL) {
                insertNode(root->right, val);
            } else {
                root->right = new TreeNode;
                root->right->val = val;
            }
        } else { // move to left subtree
            if (root->left != NULL) {
                insertNode(root->left, val);
            } else {
                root->left = new TreeNode;
                root->left->val = val;
            }
        }

    }

};
