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
    TreeNode* deleteNode(TreeNode* root, int key) {
        // root may have changed
        //if we delete a node, we need to rearrange the left and right subtrees of this node
        // if we are on a left subtree, and we delete a node here, the left subtree should be untouched, but we need to rearrange the right
        // if right subtree exists, replace it with the smallest value on the right subtree
        // if not, then we replace it with the largest node on the left subtree

        // dont delete node if we find out, replace the value here with the value closest to that that doesnt change it,
        // then get rid of the node we originally foudn

        // whatever we return from a subtree, is what we will assign the corresponding left and right child of the parent

        // if the node we want to delete only has 1 child, or none, we can return that child as the new resulting node to assign to teh parent or if none exist then it will just be NULL either way
        // for a node that has both subtrees, on the right subtree, we should return the node that has the lowest value, which means we should keep going tunil we cant anymore
        // after we find a node to delete, recursively call delete subtree with the new node that we just set

        if (!root) return NULL;

        if (key < root->val) {
            root->left = deleteNode(root->left, key); // key is on the left subtree, recursivel call this delete function
        } else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        } else { // we are on the root we are trying to delete
            if (!root->left) {
                return root->right;
            } else if (!root->right) {
                return root->left;
            } else { // the root node we want to delete has both left and right
                // find the minimum from the right subtree that still satisfies this

                TreeNode * cur = root->right;
                while (cur->left) {
                    cur = cur->left;
                }

                int newkey = cur->val;
                root->val = newkey;

                root->right = deleteNode(root->right, newkey);
            }
        }

        return root;
    }


};
