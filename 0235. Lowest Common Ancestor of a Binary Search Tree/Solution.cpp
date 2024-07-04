/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode * ans = NULL;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // want to figure out which node, has them on different sides of their child branches, one left, and one right
        // find the node furthest down that has them on different sides
        // if they are on the same side, then the ancestor is not here
        // parent can be itself
        // the original root node can always be the answer, just might not be the best answer
        // lowest node to have them both as a descendant
        dfs(root, p, q);
        return ans;
    }
    
    vector<bool> dfs(TreeNode * root, TreeNode * p, TreeNode * q) {
        if (!root) return {false, false}; // first is if q is a descendant, and second is if q is a descendant

        vector<bool> left = dfs(root->left, p, q);
        vector<bool> right = dfs(root->right, p, q);

        bool pDescendant = false;
        bool qDescendant = false;
        if (root->val == p->val) {
            pDescendant = true;
        }
        if (root->val == q->val) {
            qDescendant = true;
        }

        bool isP = left[0] || right[0] || pDescendant;
        bool isQ = left[1] || right[1] || qDescendant;

        if ((isP && isQ) && !ans) {
            ans = root;
        }

        return {isP, isQ};



    }

};
