class Solution {
public:
    int change(int amount, vector<int>& coins) {
        // count how many paths lead to an amount of 0 at the end of the decision tree
        vector<vector<int>> dp(coins.size(), vector<int>(amount + 1, -1));
        return dfs(coins, 0, amount, dp);
    }

    int dfs(vector<int> & coins, int idx, int amount, vector<vector<int>> & dp) {
        if (amount == 0) return 1; // found a proper combination
        if (amount < 0) return 0; // improper combination
        if (idx == coins.size()) return 0; // reached the end and didnt find anything

        if (dp[idx][amount] != -1) return dp[idx][amount];

        int total = 0;
        // take
        total += dfs(coins, idx, amount - coins[idx], dp);
        // skip
        total += dfs(coins, idx + 1, amount, dp);

        dp[idx][amount] = total;

        return total;
    }
};
