class Solution {
public:
    long long maximumTotalDamage(vector<int>& power) {
        unordered_map<int, int> count;

        for (const int & i : power) {
            count[i]++;
        }
        vector<int> arr;
        for (const auto & [num, _] : count) {
            arr.push_back(num);
        }

        int n = arr.size();
        vector<long long> dp(n, 0);
        sort(arr.begin(), arr.end());

        for (int i = 0; i < n; i++) {
            long long num = arr[i];
            dp[i] = num * count[num];
            for (int j = 1; j < 4; j++) {
                // have option to skip current add, or add it if the nuber if far enough away
                if (i - j >= 0) {
                    if (arr[i] - arr[i - j] > 2) {
                        // we can add
                        dp[i] = max(dp[i], dp[i - j] + num * count[num]);
                    } else {
                        // dont take current damage
                        dp[i] = max(dp[i], dp[i - j]);
                    }
                }
            }
        }

        long long ans = INT_MIN;
        for (const long long & i : dp) {
            ans = max(ans, i);
        }

        return ans;
    }

}; 
