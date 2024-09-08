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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n = 0;
        ListNode * cur = head;
        while (cur) {
            cur = cur->next;
            n++;
        }

        int minNum = n / k; // min amount per section
        int numExtras = n % k; // how many sub sections will need 1 extra part


        vector<ListNode*> ans(k, NULL);

        cur = head;
        ListNode * next;
        for (int i = 0; i < k && cur; i++) {
            ans[i] = cur;
            int extra = (numExtras > 0) ? 1 : 0;
            int segmentSize = minNum + extra;

            for (int j = 0; j < segmentSize - 1; j++) {
                cur = cur->next;
            }
            next = cur->next;
            cur->next = NULL;
            cur = next;
            numExtras--;
        }

        return ans;

    }
};
