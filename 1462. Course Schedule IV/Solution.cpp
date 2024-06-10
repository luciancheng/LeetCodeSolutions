class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        // just start at the first query node and see if its children can ever reach the second node
        // directed graph
        unordered_map<int,vector<int>> mp;
        vector<bool> ans;
        vector<vector<int>> dp(numCourses, vector<int>(numCourses, -1));

        for (auto i : prerequisites) {
            mp[i[0]].push_back(i[1]); // create adjacendy list
        }

        for (auto query : queries) {
            ans.push_back(dfs(query[0], query[1], mp, dp));
        }
        return ans;
    }

    bool dfs(int curNode, int endNode, unordered_map<int,vector<int>> & mp, vector<vector<int>> & dp) {
        if (curNode == endNode) {
            return true;
        }

        if (dp[curNode][endNode] != -1) {
            return dp[curNode][endNode];
        }

        bool canreach = false;
        for (auto node : mp[curNode]) {
            canreach = canreach || dfs(node, endNode, mp, dp);
        }

        dp[curNode][endNode] = canreach;

        return canreach;
    }
};
