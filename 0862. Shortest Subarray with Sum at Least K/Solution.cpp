class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        
        int ans = INT_MAX;

        long long sum = 0;

        deque<pair<long long,int>> q; // (prefix sum, ending index) -> in monotnic increasing order
        q.push_back({0, -1});

        for (int r = 0; r < n; r++) {
            sum += nums[r];

            if (sum >= k) {
                ans = min(ans, r + 1);
            }

            while (!q.empty() && sum - q.front().first >= k) {
                ans = min(ans, r - q.front().second);
                q.pop_front();
            }

            // want to minimize the prefix while maximizing the index
            while (!q.empty() && sum <= q.back().first) {
                q.pop_back();
            }

            q.push_back({sum, r});
        }

        return (ans == INT_MAX) ? -1 : ans;
    }
};
