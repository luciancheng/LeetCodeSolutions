/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        if (!root) return {};
        stack<Node *> s;
        vector<int> ans;
        s.push(root);
        while (!s.empty()) {
            Node * top = s.top();
            s.pop();

            ans.push_back(top->val);
            for (int i = 0; i < top->children.size(); i++) {
                s.push(top->children[i]);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;    
    }
};
