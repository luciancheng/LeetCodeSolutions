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
    ListNode* mergeNodes(ListNode* head) {
        ListNode * slow = head;
        ListNode * fast = head->next;
        int runningSum = 0;
        while (fast) {
            if (fast->val == 0) {
                slow->val = runningSum;
                if (fast->next != NULL) {
                    slow = slow->next;
                    runningSum = 0;
                }
            } else {
                runningSum += fast->val;
            }  

            fast = fast->next;
        }
        slow->next = NULL;
        return head;
    }
};
