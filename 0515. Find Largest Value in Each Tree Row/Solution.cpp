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
    vector<int> largestValues(TreeNode* root) {
        // go one row at a time,
        // use a queue to keep track of which nodes we need to check and track the current depth of the tree
        vector<int> ans;
        queue<pair<int, TreeNode*>> q;

        if (root == NULL) return ans;

        

        q.push({0, root});

        int checkingDepth = 0;

        int curMax = root->val;
        while (!q.empty()) {
            pair<int, TreeNode*> p = q.front();
            q.pop();
            int depth = p.first;
            TreeNode* node = p.second;

            if (depth > checkingDepth) {
                ans.push_back(curMax);
                checkingDepth = depth;
                curMax = INT_MIN;
            }

            curMax = max(curMax, node->val);

            if (node->left != NULL) {
                q.push({depth + 1, node->left});
            }

            if (node->right != NULL) {
                q.push({depth + 1, node->right});
            }
        }

        ans.push_back(curMax);

        return ans;
    }
};
