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
    vector<vector<string>> printTree(TreeNode* root) {
        int treeheight = height(root);
        int n = pow(2, treeheight)-1;
        vector<vector<string>> res(treeheight, vector<string>(n, ""));
        int startrow = 0;
        int startcol = (n-1)/2;
        dfs(root, startrow, startcol, treeheight, res);
        return res;
    }

    int height(TreeNode * root) {
        if (root == NULL) return 0;

        int left = height(root->left);
        int right = height(root->right);

        return 1 + max(left, right);
    }

    void dfs(TreeNode * root, int row, int col, int curHeight, vector<vector<string>> & res) {
        if (root == NULL) return;
        if (curHeight == 1) {
            res[row][col] = to_string(root->val);
            return;
        }
        dfs(root->left, row+1, col-pow(2, curHeight-2), curHeight-1, res);
        dfs(root->right, row+1, col+pow(2, curHeight-2), curHeight-1, res);

        res[row][col] = to_string(root->val);

    }
};
