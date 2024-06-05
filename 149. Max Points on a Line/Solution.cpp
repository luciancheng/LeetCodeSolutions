class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        if (points.size() <= 2) return points.size(); // if there are 1 or 2 points those will always be on the same line
        // brute force by calculating slope amonst 2 points and then checking if the other points lie on this line
        int max_points = 2;

        for (int i = 0; i < points.size() - 1; i++) {
            unordered_map<float, unordered_map<float, int>> mp; // keep track of the slopes and y ints
            
            for (int j = i+1; j < points.size(); j++) {
                float y1 = points[i][1];
                float y2 = points[j][1];
                float x1 = points[i][0];
                float x2 = points[j][0];

                float slope = (x2-x1 == 0) ? INT_MAX : (y2-y1)/(x2-x1);

                float b = y1 - slope * x1;

                if (mp[slope].count(b) == 0) {
                    mp[slope][b] = 2;
                } else {
                    mp[slope][b]++;
                }
                max_points = max(max_points, mp[slope][b]);
            }
        }

        return max_points;   
    }
};
