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

    int ans = 0;
    int maxSumBST(TreeNode* root) {
        dfs(root);
        return ans;
    }

    vector<int> dfs(TreeNode * root) { // {isvalid, sum, maxl, maxr}
        // return the L and R max boundaries of the subtrees and make sure that the root is between both ends of the bound
        if (!root) return {true, 0, 0, 0};
        
        // if its a leaf
        vector<int> left = {true, 0, root->val, root->val - 1};
        vector<int> right = {true, 0, root->val + 1, root->val};
        if (!root->left && !root->right) {
            ans = max(ans, root->val);

            return {true, root->val, root->val, root->val};
        } 
        
        if (root->left) { // no left tree
            left = dfs(root->left);
        }

        if (root->right) { // no right subtree
            right = dfs(root->right);
        }

        if (left[0] && right[0]) { // both subtrees valid, this whole thing could be valid
            if (root->val > left[3] && root->val < right[2]) {
                int sum = root->val + left[1] + right[1];
                ans = max(ans, sum);
                return {true, sum, left[2], right[3]};
            }
        }

        return {false, 0, 0, 0}; // doesnt matter what we return as long as its 0
    }
};
