class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<pair<int,int>>> adj(n, vector<pair<int,int>>());

        // create adjacency list with the weights of each path
        for (const auto &i : edges) {
            adj[i[0]].push_back({i[1], i[2]});
            adj[i[1]].push_back({i[0], i[2]});
        }

        // if i start at node 0 and it cant reach node 2, then node 2 cant reach 0, so we can do less checks
        int maxReach = INT_MAX;
        int ansNode = 0;

        auto bfs = [&](int node) -> int {
            vector<pair<int, int>> heap;
            heap.push_back({0, node});
            make_heap(heap.begin(), heap.end());
            
            unordered_set<int> visited;
            visited.insert(node);

            while (!heap.empty()) {
                pair<int, int> top = heap[0];
                pop_heap(heap.begin(), heap.end());
                heap.pop_back();
                
                int curNode = top.second;
                int curDist = top.first;

                visited.insert(curNode);

                for (const auto &[nextNode, nextDist] : adj[curNode]) {
                    if (!visited.count(nextNode) && nextDist + -1*curDist <= distanceThreshold) {
                        heap.push_back({(curDist - nextDist), nextNode});
                        push_heap(heap.begin(), heap.end());
                    }
                }
            }
            return visited.size() - 1;
        };

        for (int i = 0; i < n; i++) {
            int curamountreach = bfs(i);
            if (curamountreach <= maxReach) {
                maxReach = curamountreach;
                ansNode = i;
            }
        }
        return ansNode;
    }


};
