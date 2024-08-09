class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        // directed weighted graph
        // some greedy algorithm to find minimum time it takes to connect all nodes, greedy bfs algorithm

        unordered_map<int, vector<pair<int,int>>> adj;

        for (const auto & time : times) {
            adj[time[0]].push_back({time[1], time[2]});
        }

        unordered_set<int> visited;
        vector<pair<int, int>> heap;

        heap.push_back({0, k});

        int totaltime = 0;
        while (!heap.empty() && visited.size() != n) {
            pair<int, int> top = heap[0];

            pop_heap(heap.begin(), heap.end());
            heap.pop_back();

            int node = top.second;
            int time = top.first;

            totaltime = min(time, totaltime);

            if (visited.count(node) != 0) continue;

            visited.insert(node);
            totaltime = max(totaltime, time);

            for (const auto & [nextnode, t] : adj[node]) {
                heap.push_back({time - t, nextnode});
                push_heap(heap.begin(), heap.end());
            }

        }

        if (visited.size() == n) return totaltime * -1;
        return -1;
    }
};
