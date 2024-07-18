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
    int countPairs(TreeNode* root, int distance) {
        if (distance < 2) return 0;
        dfs(root, distance);
        return ans;
    }

    unordered_map<int, int> dfs(TreeNode * root, int distance) {
        if (!root) {
            return unordered_map<int,int>();
        }

        if (!root->left && !root->right) {
            unordered_map<int,int> count;
            count[1] = 1;
            return count;
        }

        unordered_map<int, int> leftDist = dfs(root->left, distance);
        unordered_map<int, int> rightDist = dfs(root->right, distance);

        for (const auto &[d1, c1] : leftDist) {
            for (const auto &[d2, c2] : rightDist) {
                if (d1 + d2 <= distance) {
                    ans += c1 * c2;
                }
            }
        }

        unordered_map<int,int> allDist;

        for (const auto&[d, c] : leftDist) {
            if (d + 1 <= distance) {
                allDist[d + 1] = c;
            }
        }

        for (const auto&[d, c] : rightDist) {
            if (d + 1 <= distance) {
                allDist[d + 1] += c;
            }
        }
        return allDist;
    }



};
