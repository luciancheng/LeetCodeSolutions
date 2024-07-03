class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1);
        dp[0] = 0;

        for (int i = 1; i <= amount; i++) {
            int minCoins = INT_MAX;
            for (int coin : coins) {
                int remaining = i - coin;

                if (remaining < 0) continue;
                if (dp[remaining] == -1) continue;

                minCoins = min(minCoins, dp[remaining] + 1);
            }
            dp[i] = (minCoins != INT_MAX) ? minCoins : -1;
        }
        return dp[amount];
    }
};
