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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode * b = head;
        int counter = 0;
        while (b && counter < k) {
            b = b->next;
            counter++;
        }
        if (counter != k) return head;

        ListNode * newHead = reverse(head, b);
        head->next = reverseKGroup(b, k);
        return newHead;
    }

    ListNode * reverse(ListNode * head, ListNode * end) {
        ListNode * prev = end;
        ListNode * cur = head;
        while (cur != end) {
            ListNode * next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev; 
    }
};
