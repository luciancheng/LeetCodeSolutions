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
    string targetPath;
    vector<int> ans;
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        // first find out where the node is exactly from the root, figure out how far away it is
        // figure out what height its on
        findDepth(root, target, "");

        cout << targetPath << endl;
        // get the depth of the target first, we should also find the path taken from root to go, in L R    

        // find the amount of distance we need to travel in the oppisite direciton to find the nodes we want
        followPath(root, targetPath, 0, k);
        collectNodes(target, k);
        return ans;
    }

    void findDepth(TreeNode * root, TreeNode * target, string path) {
        if (!root) return;
        if (root == target) targetPath = path;
        findDepth(root->left, target, path + 'L');
        findDepth(root->right, target, path + 'R');
    }

    void followPath(TreeNode * root, string path, int i, int k) {
        if (!root) return;
        if (i == path.size()) return;

        char dir = path[i];

        int remainingdistance = k - (path.size() - i) - 1;
        if (remainingdistance == -1) ans.push_back(root->val);

        if (dir == 'L') {
            // find the do a dfs on the right side with the remaining distance to cover
            collectNodes(root->right, remainingdistance);
            // then go left
            followPath(root->left, path, i + 1, k);
        } else {
            collectNodes(root->left, remainingdistance);
            followPath(root->right, path, i + 1, k);
        }
    }

    void collectNodes(TreeNode * root, int remainingDistance) {
        if (!root) return;
        if (remainingDistance < 0) return;
        if (remainingDistance == 0) {
            ans.push_back(root->val);
            return;
        }

        collectNodes(root->left, remainingDistance - 1);
        collectNodes(root->right, remainingDistance - 1);
    }
};
