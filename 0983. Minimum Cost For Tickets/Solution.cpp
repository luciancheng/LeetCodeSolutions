class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        // not even guanratee that the 30 day pass is the most cost effective
        // recurisvely try all combinations
        
        // might need to sort
        // sort(days.begin(), days.end());
        int n = days.size();
        vector<int> dp(n, -1);
        return dfs(days, costs, 0, dp);
    }

    int dfs(vector<int> & days, vector<int> & costs, int idx, vector<int> & dp) {
        if (idx >= days.size()) return 0;

        if (dp[idx] != -1) return dp[idx];

        // return the minimum amount of costs
        int res = INT_MAX;

        // starting at this day, we can buy a 1 day pass, 7 day or 30 day, and find out to which index we can get it to

        // one day pass, go to the next day
        res = min(res, dfs(days, costs, idx + 1, dp) + costs[0]); 

        int n = days.size();
        int i = idx;
        // 7 day pass, we can go up to 6 days in the future
        while (i < n && days[i] <= days[idx] + 6) {
            i++; // find first day that this trip doesnt cover
        }
        res = min(res, dfs(days, costs, i, dp) + costs[1]); // dont need to add + 1 because this index is already beyond the weeks coverage

        // 30 day pass, go up to 29 days in the future
        while (i < n && days[i] <= days[idx] + 29) {
            i++; // find first day that this trip doesnt cover
        }
        res = min(res, dfs(days, costs, i, dp) + costs[2]); // this index is already beyond the  months coverage

        dp[idx] = res;

        return res;
    }
};
