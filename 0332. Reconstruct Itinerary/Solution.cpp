class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        int numTickets = tickets.size();
        unordered_map<string, multiset<string>> adj;

        for (const auto & i : tickets) adj[i[0]].insert(i[1]);

        vector<string> ans;
        dfs("JFK", ans, numTickets, adj);
        return ans;
    }

    bool dfs(string curAirport, vector<string> & ans, int numTickets, unordered_map<string, multiset<string>> & adj) {
        ans.push_back(curAirport);

        if (ans.size() - 1 == numTickets) {
            return true;
        }

        multiset<string> nextAirports = adj[curAirport];

        for (auto & i : nextAirports) {
            adj[curAirport].erase(adj[curAirport].find(i));
            if (dfs(i, ans, numTickets, adj)) return true;
            adj[curAirport].insert(i);
        }
        ans.pop_back();
        return false;
    }
};
