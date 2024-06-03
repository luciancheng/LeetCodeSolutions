class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses, vector<int>());
        vector<int> inDegrees(numCourses);
        queue<int> q;
        vector<int> visited;

        // create adjacency list for directed nodes
        for (auto i : prerequisites) {
            adj[i[1]].push_back(i[0]);
            inDegrees[i[0]]++;
        }

        for (int i = 0; i < numCourses; i++) {
            if (inDegrees[i] == 0) {
                q.push(i);
            }
        }

        // start at each node and do a BFS to see if it can reach all of the nodes

        while (!q.empty()) {
            int curCourse = q.front();
            q.pop();
            visited.push_back(curCourse);

            for (auto course : adj[curCourse]) {
                if (--inDegrees[course] == 0) {
                    q.push(course);
                }
            }
        }

        if (visited.size() == numCourses) {
            return visited;
        }
    
        return {};
    }
};
