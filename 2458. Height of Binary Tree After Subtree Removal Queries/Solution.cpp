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
    vector<int> treeQueries(TreeNode* root, vector<int>& queries) {
        unordered_map<int, int> heights;
        unordered_map<int, vector<int>> top2heights;
        calcheight(root, 0, heights, top2heights);

        // find optimal ans
        unordered_map<int, int> queryanswers;

        findQueryAnswers(root->left, 1, queryanswers, heights, top2heights);
        findQueryAnswers(root->right, 1, queryanswers, heights, top2heights);

        // for (const auto & [level, vec] : top2heights) {
        //     cout << level << " : " << vec[0] << " " << vec[1] << endl;
        // }

        vector<int> ans;
        for (const int & node : queries) {
            ans.push_back(queryanswers[node]);
        }

        return ans;

    }

    void findQueryAnswers(TreeNode * root, int level, unordered_map<int, int> & queryanswers, unordered_map<int, int> & heights, unordered_map<int, vector<int>> & top2heights) {
        if (!root) return;

        // test to see what happens if we remove the current node
        int node= root->val;
        if (node == top2heights[level][0]) {
            // 
            if (top2heights[level][1] == 0) { // there was only 1 node on this level
                queryanswers[node] = level - 1;
            } else {
                queryanswers[node] = level + heights[top2heights[level][1]];
            } 
        } else {
            queryanswers[node] = level + heights[top2heights[level][0]];
        }

        // cout << "to remove " << node << " " << queryanswers[node] << endl;


        findQueryAnswers(root->left, level + 1, queryanswers, heights, top2heights);
        findQueryAnswers(root->right, level + 1, queryanswers, heights, top2heights);
    }

    int calcheight(TreeNode * root, int level, unordered_map<int, int> & heights, unordered_map<int, vector<int>> & top2heights) {
        if (!root) return 0;

        int left = calcheight(root->left, level + 1, heights, top2heights);
        int right = calcheight(root->right, level + 1, heights, top2heights);

        int res = max(left, right);
        heights[root->val] = res; // set height of each subtree hashed by its node value

        // top heights for this level doesnt exist
        // save the 2 nodes that have the highest height at a given level
        if (top2heights.count(level) == 0) {
            top2heights[level] = {0, 0}; // initialize it
            top2heights[level][0] = root->val;
        } else {
            // current height is greater than the max, shift it down by 1
            // 0 has the 
            if (res >= heights[top2heights[level][0]]) {
                top2heights[level][1] = top2heights[level][0];
                top2heights[level][0] = root->val;
            } else if (res >= heights[top2heights[level][1]]) {
                top2heights[level][1] = root->val;
            }
        }

        return res + 1;
    }
};
