class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(), 0);
        // use a monotonic stackt o keep track of decreasing temps and the size of it
        // if temp is increasing, then we can pop the top most element
        stack<vector<int>> s;
        for (int i = 0; i < temperatures.size(); i++) {
            while (!s.empty() && s.top()[0] < temperatures[i]) {
                int diff = i - s.top()[1];
                ans[s.top()[1]] = diff;
                s.pop();
            }
            s.push({temperatures[i], i});
        }
        return ans;
    }
};
