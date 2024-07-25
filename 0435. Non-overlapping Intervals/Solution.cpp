class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int ans = 0;
        sort(intervals.begin(), intervals.end());

        int checkIndex = 0;
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] < intervals[checkIndex][1]) {
                ans++;
                intervals[i][1] = min(intervals[i][1], intervals[checkIndex][1]);
            } 
            checkIndex++;
        }
        return ans;
    }
};
