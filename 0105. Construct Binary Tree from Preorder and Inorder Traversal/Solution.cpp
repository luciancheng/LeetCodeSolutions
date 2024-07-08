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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder, inorder, 0, preorder.size() - 1, 0, inorder.size() - 1);
    }

    TreeNode * build(vector<int> & preorder, vector<int> & inorder, int preL, int preR, int inL, int inR) {
        if (preL > preR || inL > inR) {
            return NULL;
        }

        int curVal = preorder[preL];

        int inPivot = 0; // find the pivot index of the inorder traversal
        while (inorder[inPivot] != curVal) {
            inPivot++;
        }

        int dist = inPivot - inL;
        int prePivot = preL + dist + 1;

        TreeNode * leftSubtree = build(preorder, inorder, preL + 1, prePivot - 1, inL, inPivot - 1);
        TreeNode * rightSubtree = build(preorder, inorder, prePivot, preR, inPivot + 1, inR);

        TreeNode * root = new TreeNode(curVal);
        root->left = leftSubtree;
        root->right = rightSubtree;
        return root;
    }
};
