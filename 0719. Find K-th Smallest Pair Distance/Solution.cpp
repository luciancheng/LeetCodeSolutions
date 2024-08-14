class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int l = 0;
        int r = nums[n - 1]; // r is the maximum element in nums

        auto numPairs = [&](int dist) -> int {
            int res = 0;
            int L = 0;
            for (int R = 1; R < n; R++) {
                while (nums[R] - nums[L] > dist) {
                    L++;
                }
                res += (R - L);
            }
            return res;
        };

        int ans = INT_MAX;
        while (l <= r) {
            int mid = (l + r) / 2;
            
            if (numPairs(mid) >= k) {
                // if it has more than k pairs at a certain difference, this could be the answer and we should save it
                r = mid - 1;
                ans = min(ans, mid);
            } else {
                // if a difference has les than k pairs, then this cannot possibly be the answer we are looking for
                l = mid + 1;
            }
        }
        return ans;
    }
};
