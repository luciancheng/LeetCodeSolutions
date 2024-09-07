/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    bool isSubPath(ListNode* head, TreeNode* root) {
        // at a node, we can either match it, or skp it
        if (!head) return true; // matched enough items in the linked list to get to the end, meaning it has properly been found
        if (!root) return false; // reached the end of a branch and didnt match

        bool res = false;
        // skip and go left
        res |= isSubPath(head, root->left);

        // skip and go right
        res |= isSubPath(head, root->right);

        // treat this node as the beginning of the linked list we want to search for
        res |= search(head, root);
        return res;
    }

    bool search(ListNode*head, TreeNode*root) {
        if (!head) return true;
        if (!root) return false;

        bool res = false;

        if (head->val == root->val) {
            res |= search(head->next, root->left);
            res |= search(head->next, root->right);
        }

        return res;
    }
};
