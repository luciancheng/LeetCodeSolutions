class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1);

        for (int i = 0; i <= n; i++) {
            int curnum = i;

            int count = 0;
            for (int j = 0; j < 32; j++) {
                count += 0x0001 & curnum;
                curnum = curnum >> 1;
            }
            ans[i] = count;
        }
        return ans;
    }
};
