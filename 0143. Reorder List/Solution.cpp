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
class Solution {
public:
    void reorderList(ListNode* head) {
        stack<ListNode*> s;
        ListNode * cur = head;
        while (cur) {
            s.push(cur);
            cur = cur->next;
        }
        
        int n = s.size();
        cur = head;
        ListNode * next;
        for (int i = 0; i < n/2; i++) {
            cout << "Iter " << i << endl;
            next = cur->next;
            ListNode * end = s.top();
            cout << cur->val << " " << end->val << " " << next->val << endl;
            s.pop();
            cur->next = end;
            cur->next->next = next; // for even lengthed linked list, the last node will just point to itself, we just need to fix that at the end by fixing the nex tpointer to null
            // for odd lenghted LL, it will point to the end and we also fix it by setting the next to null
            cur = cur->next->next;
        } 
        cout << "end " << cur->val << endl;
        cur->next = NULL;
    }
};
