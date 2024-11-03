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
    TreeNode* str2tree(string s) {
        // always construct left child if it exists first
        // when we reach a open bracket, start constructing
        // use a stack
        // when we see a open bracket push the curent node to the stack, the number that comes right after this will be its left node
        // after we are done parsing a current number, add it to the stack, add it to the left children of the top element if it doenst have one, otherwise add it to the right then add it to the stack
        // cloising brakcets mean pop out from the stack

        stack<TreeNode *> st;

        int n = s.size();
        if (n == 0) return NULL;

        for (int i = 0; i < n; i++) {
            char cur = s[i];
            if (cur == ')') {
                st.pop();
            // only parse if we arent on a open bracket
            } else if (s[i] != '(') { // assuming that this is valid, we will parse up until we find a closing bracket
                int size = 0;
                while (i + size < n && (s[i + size] != '(' && s[i + size] != ')')) { // keep parsing while we arent at a bracket
                    size++;
                }

                string sub = s.substr(i, size);
                int val = stoi(s.substr(i, size));
                TreeNode * node = new TreeNode(val);

                // we are pushing the node either way
                if (!st.empty()) {
                    if (st.top()->left) { // left already exists, this is a right node
                        st.top()->right = node;
                    } else {
                        st.top()->left = node;
                    }
                }

                st.push(node);
                i += size - 1; // skip until end of this number
            }
        }

        return st.top();

    }
};
