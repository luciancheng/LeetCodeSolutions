class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses, vector<int>());
        vector<int> inDegrees(numCourses, 0);
        for (const auto & i : prerequisites) {
            adj[i[0]].push_back(i[1]);
            inDegrees[i[1]]++;
        }

        queue<int> q;
        for (int course = 0; course < numCourses; course++) {
            // run a graph search on all nodes that have an indegress = 0, since these must be starting courses, other courses with indegress > 0, must hvae a prerequisite we need to traverse first
            if (inDegrees[course] == 0) { // run a search on it only if its a starting course
                q.push(course); // add coruses that have an indegrees of 0 to the q since we can only start at these nodes
            }
        }

        while (!q.empty()) {
            int course = q.front();
            q.pop();
            
            vector<int> nextCourses = adj[course];
            for (int nextCourse : nextCourses) {
                inDegrees[nextCourse]--;

                if (inDegrees[nextCourse] == 0) {
                    q.push(nextCourse);
                }
            }
        }

        for (int i = 0; i < numCourses; i++) {
            if (inDegrees[i] > 0) return false;
        }
        return true;
    }
};
