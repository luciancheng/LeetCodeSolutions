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

bool compare(ListNode * a, ListNode * b) {
    return a->val < b->val;
}

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode * headPtr = new ListNode();
        vector<ListNode *> heap;

        for (int i = 0; i < lists.size(); i++) {
            ListNode * cur = lists[i];
            while (cur) {
                heap.push_back(cur);
                cur = cur->next;
            }
        }
        sort(heap.begin(), heap.end(), compare);

        ListNode * cur = headPtr;

         for (auto i : heap) {
            cur->next = i;
            cur = cur->next;
        }
        cur->next = NULL; // finish by setting the last node to point to null after joining everything
        

        return headPtr->next;
    }
};
