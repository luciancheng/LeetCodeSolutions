class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // on a given day, we have a choice on if we want to buy, sell, or skip
        // if we sell, the next day we must skip
        // use recursion to keep track of final answer
        // initially, we can either buy or skip
        // if we bought, then we can sell or skip
        // if we just sold, we must skip

        // hasStock
        int n = prices.size();

        vector<vector<int>> dp(n, vector<int>(2, -1));
        return dfs(prices, 0, 0, dp);
    }

    int dfs(vector<int> & prices, int idx, int hasStock, vector<vector<int>> & dp) {
        if (idx >= prices.size()) return 0; // reached the end, the end returns 0

        if (dp[idx][hasStock] != -1) return dp[idx][hasStock];

        int res = 0;
        if (hasStock) { // if we have a stock, then we either skip or sell
            // sell stock
            res = max(res, dfs(prices, idx + 2, 0, dp) + prices[idx]); // idx + 1 since we cannot do the next day if we sell

            // skip
            res = max(res, dfs(prices, idx + 1, 1, dp)); // still have stock
        } else { // if we dont have stock, we can buy or skip
            // buy the stock at idx
            res = max(res, dfs(prices, idx + 1, 1, dp) - prices[idx]);
            
            // wait
            res = max(res, dfs(prices, idx + 1, 0, dp));
        }

        dp[idx][hasStock] = res;

        return res;
    }
};
