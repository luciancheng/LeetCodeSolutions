/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (!root) {
            return "1#N";
        }

        string left = serialize(root->left);
        string right = serialize(root->right);

        string cur = "";
        int val = root->val;
        string dig = to_string(val);
        cur += to_string(dig.size()) + '#';
        cur += dig;
        // return a dfs preorder traversal, going root->left->right
        return cur + left + right;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        pair<TreeNode *, int> ret = build(data, 0);
        return ret.first;
    }

    pair<TreeNode *, int> build(string data, int idx) {
        string len = "";
        int i = idx;
        while (data[i] != '#') {
            len += data[i];
            i++;
        }
        i++;
        int length = stoi(len);
        if (length == 1 && data[i] == 'N') {
            return {NULL, i + 1};
        }

        string nodeValStr = data.substr(i, length);
        int nodeVal = stoi(nodeValStr);
        TreeNode * root = new TreeNode(nodeVal);
    
        pair<TreeNode *, int> left = build(data, i + length);
        int leftIdx = left.second;
        pair<TreeNode *, int> right = build(data, leftIdx);
        root->left = left.first;
        root->right = right.first;

        return {root, right.second};
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
