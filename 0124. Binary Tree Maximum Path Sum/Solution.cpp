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
    int maxPath = INT_MIN;
    int maxPathSum(TreeNode* root) {
        check(root);
        return maxPath;
    }

    int check(TreeNode * root) {
        if (!root) return 0;
        int curVal = root->val;

        int leftTreeMax = check(root->left);
        int rightTreeMax = check(root->right);

        int curMax = curVal;
        curMax = max(curMax, curVal + rightTreeMax);
        curMax = max(curMax, curVal + leftTreeMax);
        curMax = max(curMax, curVal + rightTreeMax + leftTreeMax);
        maxPath = max(maxPath, curMax);

        int returnMax = curVal;
        returnMax = max(returnMax, curVal + leftTreeMax);
        returnMax = max(returnMax, curVal + rightTreeMax);
        return returnMax;
    }
};
