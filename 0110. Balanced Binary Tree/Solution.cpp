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
    bool isBalanced(TreeNode* root) {
        vector<int> res = height(root);
        return res[0];
    }
    vector<int> height(TreeNode* root) {
        if (!root) return {1, 0}; // first value is if its valid or not, second is height
        // NULL roots should be valid at first, and the they have a height of 0

        vector<int> left = height(root->left);
        vector<int> right = height(root->right);

        // get the hieght diff between the left and right subtree and have this bool value carry throughout the entire tree
        bool isValid = abs(left[1] - right[1]) <= 1;

        // this root is only valid if the left and right child are also valid along with this one
        return {isValid && left[0] && right[0], 1 + max(left[1], right[1])};
    }
};
