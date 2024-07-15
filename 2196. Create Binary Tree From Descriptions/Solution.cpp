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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode * > mp;
        unordered_set<int> childrens;
        unordered_set<int> parents;
    
        for (const auto &branch : descriptions) {
            int parent = branch[0];
            int child = branch[1];
            int isLeft = branch[2];

            if (mp.count(child) == 0) {
                mp[child] = new TreeNode(child);
            }

            if (mp.count(parent) == 0) {
                mp[parent] = new TreeNode(parent);
            }
            
            if (isLeft) mp[parent]->left = mp[child];
            else mp[parent]->right = mp[child];

            if (childrens.count(parent) == 0) parents.insert(parent);
            if (parents.count(child) != 0) parents.erase(child);
            
            childrens.insert(child);
        }

        for (const auto & i : parents) return mp[i];
        return 0;
    }   
};
