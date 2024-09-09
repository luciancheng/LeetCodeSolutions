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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m, vector<int>(n, -1));

        ListNode * cur = head;

        int r = 0;
        int c = 0;

        vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        int curDir = 0;

        int rTop = 0;
        int rBottom = m;
        int cLeft = -1;
        int cRight = n;

        while (cur) {
            ans[r][c] = cur->val;

            if (curDir == 0 && c == (cRight - 1)) {
                cRight--;
                curDir = (curDir + 1) % 4;
            } else if (curDir == 1 && r == (rBottom - 1)) {
                rBottom--;
                curDir = (curDir + 1) % 4;
            } else if (curDir == 2 && c == (cLeft + 1)) {
                cLeft++;
                curDir = (curDir + 1) % 4;
            } else if (curDir == 3 && r == (rTop + 1)) {
                rTop++;
                curDir = (curDir + 1) % 4;
            } 
            auto [dx, dy] = dir[curDir];

            r += dx;
            c += dy;

            cur = cur->next;
        }
        

        return ans;
    }
};
