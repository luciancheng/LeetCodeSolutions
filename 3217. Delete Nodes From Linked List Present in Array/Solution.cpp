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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> mp;
        for (const int & i : nums) {
            mp.insert(i);
        }

        ListNode * dummy = new ListNode();
        ListNode * cur = head;
        dummy->next = head;
        ListNode * prev = dummy;

        while (cur) {
            // delete node 
            if (mp.count(cur->val) != 0) {
                while (cur && mp.count(cur->val) != 0) {
                    cur = cur->next;
                }
                prev->next = cur;
                if (!cur) {
                    break;
                }
            }
            cur = cur->next;
            prev = prev->next;
        }

        return dummy->next;
    }
};
