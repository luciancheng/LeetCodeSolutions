class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        long long ans = 0;
        unordered_map<char, vector<pair<char, int>>> adj;
        int n = original.size();

        vector<unordered_map<char, int>> dp(26);

        for (int i = 0; i < n; i++) {
            adj[original[i]].push_back({changed[i], cost[i]});
        }

        auto bfs = [&](char start, char dest) -> int {
            vector<pair<int, char>> heap;
            heap.push_back({0, start});
            unordered_set<char> visited;

            if (dp[start - 'a'].count(dest) != 0) {
                return dp[start - 'a'][dest];
            }

            
            while (!heap.empty()) {
                auto [costSoFar, curLetter] = heap[0];
                pop_heap(heap.begin(), heap.end());
                heap.pop_back();

                visited.insert(curLetter);

                // if (dp[start-'a'].count(curLetter) != 0) {
                //     dp[start-'a'][curLetter] = -1 * costSoFar;
                // }

                // if (dp[curLetter - 'a'].count(dest) != 0) {
                //     return -1*costSoFar + dp[curLetter - 'a'][dest];
                // }

                if (curLetter == dest) {
                    dp[start - 'a'][dest] = -1 * costSoFar;
                    return -1 * costSoFar;
                }

                for (const auto &[nextLetter, nextCost] : adj[curLetter]) {
                    if (!visited.count(nextLetter)) {
                        heap.push_back({costSoFar - nextCost, nextLetter});
                        push_heap(heap.begin(), heap.end());
                        // dp[curLetter - 'a'][nextLetter] = nextCost;
                    }
                }
            }

            return -1;
        };

        for (int i = 0; i < source.size(); i++) {
            char start = source[i];
            char dest = target[i];

            // do a dijkstras from start to dest and add p the minimum cost
            // if in bfs, the current letter isnt the destination at the end, then we return -1 since we cant even convert that letter

            int res = bfs(start, dest);
            if (res == -1) return -1;
            ans += res;
        }

        return ans;
    }
};
