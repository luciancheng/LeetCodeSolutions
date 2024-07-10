class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        if (intervals.size() == 0) return {newInterval};
        if (newInterval.size() == 0) return intervals;
        bool used = false;

        int start = 1;
        int prev = 0;
        if (intervals[0][0] < newInterval[0]) {
            ans.push_back(intervals[0]);
        } else {
            ans.push_back(newInterval);
            start = 0;
        }

        for (int i = start; i < intervals.size(); i++) {
            if (!used) {
                if (newInterval[0] < intervals[i][0]) {
                    if (newInterval[0] <= ans[prev][1]) {
                        ans[prev][1] = max(ans[prev][1], newInterval[1]);
                    } else {
                        ans.push_back(newInterval);
                        prev++;
                    }
                    used = true;
                }
            } 

            if (intervals[i][0] <= ans[prev][1]) {
                ans[prev][1] = max(ans[prev][1], intervals[i][1]);
            } else {
                ans.push_back(intervals[i]);
                prev++;
            }
        }

        if (!used) {
            if (newInterval[0] <= ans[prev][1]) {
                ans[prev][1] = max(newInterval[1], ans[prev][1]);
            } else {
                ans.push_back(newInterval);
            }
        }
        return ans;
    }
};
