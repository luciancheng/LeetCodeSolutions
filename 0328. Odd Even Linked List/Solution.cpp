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
    ListNode* oddEvenList(ListNode* head) {
        // must rearrange nodes, cant make a copy of it
        if (!head) return NULL;

        ListNode * evenDummy = new ListNode();   // point to all even nodes
        ListNode * dummy = new ListNode(); // dummy for odd nodes, we will connect the two together later

        ListNode * cureven = evenDummy;
        ListNode * curodd = dummy;

        ListNode * cur = head;

        while (cur) {
            curodd->next = cur;
            curodd = curodd->next;

            if (cur->next) { // if the next even node exists, link it also , will account for double traversal if it exists
                cureven->next = cur->next;
                cureven = cureven->next;
                cur = cur->next;
            }

            cur = cur->next;
        }

        curodd->next = evenDummy->next;
        cureven->next = NULL;
        return dummy->next;
    }
};
