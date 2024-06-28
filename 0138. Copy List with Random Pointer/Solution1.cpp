/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return NULL;
        vector<int> idxPointers;
        unordered_map<Node *, int> mp;

        Node * cur = head;
        int i = 0;
        while (cur) {
            mp[cur] = i;
            i++;
            cur = cur->next;
        }

        cur = head;
        while (cur) {
            if (!cur->random) {
                idxPointers.push_back(-1);
            } else {
                idxPointers.push_back(mp[cur->random]);
            }
            cur = cur->next;
        }        


        Node * newHead = new Node(head->val);
        Node * newCur = newHead;
        cur = head->next;

        vector<Node*> newArr;
        newArr.push_back(newHead);

        while (cur) {
            newCur->next = new Node(cur->val);
            newArr.push_back(newCur->next);
            newCur = newCur->next;
            cur = cur->next;
        }

        for (int j = 0; j < newArr.size(); j++) {
            Node * node = newArr[j];
            int index = idxPointers[j];

            if (index == -1) {
                node->random = NULL;
            } else {
                node->random = newArr[index];
            }
        }

        return newArr[0];
    }
};
