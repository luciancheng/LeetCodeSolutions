class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        // do a dfs to see what the minimum result is
        unordered_map<int, vector<vector<int>>> adj;

        for (const auto & i : flights) {
            adj[i[0]].push_back({i[1], i[2]}); // src : {to, price}
        }

        vector<vector<int>> heap;

        for (const auto & i : adj[src]) {
            heap.push_back({-i[1], i[0], 0}); // curPrice, next, numStops
        }

        make_heap(heap.begin(), heap.end());


        while (!heap.empty()) {
            vector<int> node = heap[0];
            pop_heap(heap.begin(), heap.end());
            heap.pop_back();

            int cur = node[1];
            int curPrice = -node[0];
            int stopsbetween = node[2];

            if (stopsbetween > k) continue;

            if (cur == dst) {
                return curPrice;
            }

            for (const auto & nextNode : adj[cur]) {
                int nextStop = nextNode[0];
                int nextPrice = nextNode[1];

                heap.push_back({-curPrice - nextPrice, nextStop, stopsbetween + 1});
                push_heap(heap.begin(), heap.end());
            }
        }

        return -1;

    }


};
