// dynamic programming solution - f(n) = f(n-1) * 2 + f(n-3)

class Solution {
public:
    int modulo = pow(10, 9) + 7;
    int dp[1001] = {};
    int numTilings(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;
        if (n == 3) return 5;

        if (dp[n]) {
            return dp[n];
        }
        int ans = ((numTilings(n-1) * 2 ) % modulo + numTilings(n-3) % modulo) % modulo;
        dp[n] = ans;

        return ans;
    }
};
