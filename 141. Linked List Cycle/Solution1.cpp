/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> visitedNodes;

        ListNode * cur = head;

        while (cur != NULL) {
            if (visitedNodes.count(cur) == 0) {
                visitedNodes.insert(cur);
            } else {
                return true;
            }
            cur = cur->next;
        }

        return false;
    }
};
