class Solution {
public:
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        vector<int> rowOrder = topo_sort(rowConditions, k);
        vector<int> colOrder = topo_sort(colConditions, k);

        // if a cycle was detected, we have an empty array, and we can just return empty answer
        if (rowOrder.size() == 0 || colOrder.size() == 0) return {};

        vector<vector<int>> ans(k, vector<int>(k, 0));

        unordered_map<int, int> mp_row;
        unordered_map<int, int> mp_col;

        // convert the vector into a hashamp of number : index for quick look up in build phase
        for (int i = 0; i < rowOrder.size(); i++) {
            mp_row[rowOrder[i]] = i;
        }

        for (int i = 0; i < colOrder.size(); i++) {
            mp_col[colOrder[i]] = i;
        }

        // iterate through all numbers from 1 to k, and place it in the correct spot using the indices from the consturcted vectors, since its a k by k array and k elements, each number can have its own row and column
        for (int i = 1; i <= k; i++) {
            ans[mp_row[i]][mp_col[i]] = i;
        }

        return ans;
    }

    bool dfs(int src, unordered_map<int, vector<int>> & adj, unordered_set<int> & visit, unordered_set<int> & path, vector<int> & order) {
        // if source node is along the path we are on, then we determine a cycle
        if (path.count(src) != 0) {
            return false;
        }

        // avoid going deeper if we encounter a node already visited, return true since this is a valid node already
        if (visit.count(src) != 0) {
            return true;
        }

        // never visit a node multiple times
        visit.insert(src);
        path.insert(src);

        for (const int i : adj[src]) {
            if (!dfs(i, adj, visit, path, order)) return false;
        }

        // pop it from the current path since we dont need to go to another node
        path.erase(src);
        order.push_back(src);
        return true;
    }

    vector<int> topo_sort(vector<vector<int>>& conditions, int k) {
        unordered_map<int, vector<int>> adj;

        for (const auto &i : conditions) {
            adj[i[0]].push_back(i[1]);
        }

        unordered_set<int> visit;
        unordered_set<int> path;
        vector<int> order;

        // go through each possible num from 1 to k and add it to order, this will also be added to visited so we dont add the same number to order again. for numbers that arent in the
        // topoloigcal sort, we will till add them since they dont have dhilren nodes, we add in order of nodes that dont have descendants
        for (int src = 1; src <= k; src++) {
            if (!dfs(src, adj, visit, path, order)) return {};
        }

        // reverse the order since we need it from left to right or up to down
        reverse(order.begin(), order.end());
        return order;
    }
};
