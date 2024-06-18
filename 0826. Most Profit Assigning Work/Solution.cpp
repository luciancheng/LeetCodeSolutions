class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        // find max profit that a worker can do
        int total = 0;
        vector<vector<int>> arr;

        for (int i = 0; i < difficulty.size(); i++) {
            arr.push_back({profit[i], difficulty[i]});
        }

        sort(arr.begin(), arr.end());
        sort(worker.begin(), worker.end());

        int startIdx = difficulty.size() - 1;
        for (int i = worker.size() - 1; i >= 0; i--) {
            while (startIdx >= 0 && arr[startIdx][1] > worker[i]) {
                startIdx--;
            }
            if (startIdx >= 0) total += arr[startIdx][0];
            else break;
        }
        
        return total;
    }
};
