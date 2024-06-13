class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<vector<int>> timeNeeded;
        for (int i = 0; i < plantTime.size(); i++) {
            timeNeeded.push_back({growTime[i], plantTime[i]}); // {time for growing, time for plant}
        }
        sort(timeNeeded.begin(), timeNeeded.end());

        int totalDays = 0;
        int curDay = 0;

        for (int i = timeNeeded.size() - 1; i >= 0; i--) {
            vector<int> plant = timeNeeded[i];
            int growtime = plant[0];
            int planttime = plant[1];
            totalDays = max(totalDays, curDay + growtime + planttime);

            curDay += planttime;
        }

        return totalDays;

    }
};
