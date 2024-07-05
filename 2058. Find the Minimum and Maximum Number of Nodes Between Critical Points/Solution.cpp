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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        // can only have a min or max if there is a previous and next node
        // head cant be one
        int minDistance = INT_MAX;
        int maxDistance = INT_MIN;

        ListNode * cur1 = head;
        ListNode * cur2 = head;

        int count = 0;
        while (cur2 && count < 2) {
            cur2 = cur2->next;
            count++;
        }

        if (count != 2) return {-1, -1};
        if (!cur2 || !cur2->next) return {-1, -1};

        int furthest = 0;
        int closest = 0;
        int curDist = 0;
        while (cur2) {
            curDist++;
            if ((cur1->val < cur1->next->val && cur1->next->val > cur2->val) || cur1->val > cur1->next->val && cur1->next->val < cur2->val) { // crit
                if (closest > 0 || furthest > 0) {
                    minDistance = min(minDistance, curDist - closest);
                    maxDistance = max(maxDistance, curDist - furthest);
                }

                if (furthest == 0) {
                    furthest = curDist;
                }
                closest = curDist;
            }

            cur1 = cur1->next;
            cur2 = cur2->next;
        }
        if (minDistance == INT_MAX || maxDistance == INT_MIN) return {-1, -1};
        return {minDistance, maxDistance};
    }
};
