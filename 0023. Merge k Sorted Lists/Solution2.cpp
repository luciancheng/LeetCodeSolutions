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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0) return NULL;

        // take pairs of linked lists and merge them together, until there is only 1 linked list
        // keep cutting lists in half
        while (lists.size() > 1) {
            vector<ListNode*> mergedList;

            for (int i = 0; i < lists.size(); i += 2) {
                ListNode * l1 = lists[i];
                ListNode * l2;
                if (i + 1 < lists.size()) l2 = lists[i + 1];
                else l2 = NULL;

                // add the merged list to the temp variable
                mergedList.push_back(merge(l1, l2));
            }

            // once the lists are merged for this session, then update the lists variable
            lists = mergedList;
        }

        return lists[0];
    }

    ListNode * merge(ListNode * l1,  ListNode * l2) {
        ListNode * prev = new ListNode();
        ListNode * cur = prev;

        ListNode * cur1 = l1;
        ListNode * cur2 = l2;

        while (cur1 || cur2) {
            if (!cur1) {
                cur->next = cur2;
                cur = cur->next;
                cur2 = cur2->next;
                continue;
            }
            if (!cur2) {
                cur->next = cur1;
                cur = cur->next;
                cur1 = cur1->next;
                continue;
            }


            if (cur1->val < cur2->val) {
                cur->next = cur1;
                cur1 = cur1->next;
            } else {
                cur->next = cur2;
                cur2 = cur2->next;
            }
            cur = cur->next;
        }

        return prev->next;
    }
};
