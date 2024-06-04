class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<vector<int>> s;
        int maxArea = INT_MIN;

        for (int i = 0; i < heights.size(); i++) {
            if (s.empty()) {
                s.push({i, heights[i]});
                maxArea = max(heights[i], maxArea);
            } else {
                if (heights[i] >= s.top()[1]) {
                    s.push({i, heights[i]});
                } else {
                    int firstIdx;
                    while (!s.empty()) {
                        if (heights[i] < s.top()[1]) {
                            firstIdx = s.top()[0];
                            maxArea = max(maxArea, s.top()[1] * (i-firstIdx));
                            s.pop();
                        } else {
                            break;
                        }
                    }
                    s.push({firstIdx, heights[i]});
                }
            }
        }

        int n = heights.size();

        while (!s.empty()) {
            maxArea = max(maxArea, s.top()[1] * (n - s.top()[0]));
            s.pop();
        }

        return maxArea;
    }
};
