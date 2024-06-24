class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        queue<int> q;
        int flips = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (!q.empty() && i > q.front() + k - 1) {
                q.pop();
            }
            int trueval = (nums[i] + q.size()) % 2;

            if (!trueval) {
                if (i + k > n) return -1;
                q.push(i);
                flips++;
            }
        }

        return flips;
    }
};
