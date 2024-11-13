/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return NULL;

        Node * cur = root;

        // temp is dummy variable used ot point to the next leveled node

        while (cur) { // going down the tree
            Node * temp = new Node();
            Node * cur2 = temp;

            while (cur) { // go
                if (cur->left) {
                    cur2->next = cur->left;
                    cur2 = cur2->next;
                }

                if (cur->right) {
                    cur2->next = cur->right;
                    cur2 = cur2->next;
                }
                cur = cur->next;
            }

            cur = temp->next;
        }

        return root;
    }



};
