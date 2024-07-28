class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& edges, int time, int change) {
        unordered_map<int, vector<int>> adj;

        for (const auto & i : edges) {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }

        queue<int> q;
        q.push(1);

        int curTime = 0;
        int res = -1;
        unordered_map<int, vector<int>> visitTimes;

        while (!q.empty()) {
            int len = q.size();
            for (int i = 0; i < len; i++) {
                int node = q.front();
                q.pop();

                if (node == n) {
                    if (res != -1) return curTime;
                    res = curTime; // first time reaching node n will replace res, so once we reach it again itll be the answer we can return
                }
                for (const int & nei : adj[node]) {
                    vector<int> neiTimes = visitTimes[nei];
                    
                    if (neiTimes.size() == 0 || (neiTimes.size() == 1 && neiTimes[0] != curTime)) {
                        // we are at a different time
                        q.push(nei); // dont want a node to be added to the queue more than 2 times
                        visitTimes[nei].push_back(curTime); // if we find another instnace of reaching this node at the same time as before, skip it
                    }
                }
            }
            if ((curTime / change) % 2 == 1) { // if at a redlight
                curTime += change - (curTime % change);
            }
            curTime += time;
        }

        return 0;
        
    }
};
