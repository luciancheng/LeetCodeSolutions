class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n + 1);
        dp[0] = 0;

        // go through the array
        for (int i = 1; i < n+1; i++) {
            // iterate over ever possible square
            int minMoves = INT_MAX;
            for (int j = 1; pow(j,2) <= i; j++) {
                minMoves = min(minMoves, dp[i - pow(j,2)] + 1);
            }
            dp[i] = minMoves;
        }
        return dp[n];
    }
};
