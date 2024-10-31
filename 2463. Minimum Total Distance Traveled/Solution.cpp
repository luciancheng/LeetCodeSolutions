class Solution {
public:
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        // unique robot pos and factory pos
        // be greedy, for each robot, find the nearest available factory that is open
        sort(robot.begin(), robot.end());
        sort(factory.begin(), factory.end());

        vector<int> factoryflattened;

        for (int i = 0; i < factory.size(); i++) {
            int pos = factory[i][0];
            int count = factory[i][1];
            for (int j = 0; j < count; j++) {
                factoryflattened.push_back(pos);
            }
        }

        int n = robot.size();
        int m = factoryflattened.size();

        vector<vector<long long>> dp(n, vector<long long>(m, -1));

        return dfs(robot, factoryflattened, 0, 0, dp);
    }

    long long dfs(vector<int> & robot, vector<int> & factory, int idx, int factoryidx, vector<vector<long long>> & dp) {
        if (idx == robot.size()) return 0; // no more robots to keep track of
        if (factoryidx == factory.size()) return 10000000000000LL;

        if (dp[idx][factoryidx] != -1) return dp[idx][factoryidx];

        long long res = LLONG_MAX;
        
        // take or skip

        // take this current factory instance
        res = min(res, dfs(robot, factory, idx + 1, factoryidx + 1, dp) + abs(factory[factoryidx] - robot[idx]));

        // skip the current factory instance
        res = min(res, dfs(robot, factory, idx, factoryidx + 1, dp)); // completely skip this factory

        dp[idx][factoryidx] = res;

        return res;
    }
};
