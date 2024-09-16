class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int ans = INT_MAX;
        // 0 can be 0 or 1440 minutes
        int n = timePoints.size();

        vector<int> minutesTime;
        for (const string & i : timePoints) {
            int hrs = stoi(i.substr(0, 2));
            int mn = stoi(i.substr(3, 2));

            int minutes = hrs * 60 + mn;

            minutesTime.push_back(minutes);
        }

        sort(minutesTime.begin(), minutesTime.end());

        for (int i = 0; i < n - 1; i++) {
            int diff = abs(minutesTime[i] - minutesTime[i + 1]);

            ans = min(diff, ans);
        }

        // check first and last, and account for the 1440 difference in time
        ans = min(ans, abs(minutesTime[n - 1] - 1440 - minutesTime[0]));

        return ans;
    }
};
