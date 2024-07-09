class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double time = 0;
        int n = customers.size();
        
        int chefFinish = customers[0][0] + customers[0][1];
        time += chefFinish - customers[0][0];
        for (int i = 1; i < n; i++) {
            vector<int> cust = customers[i];
            if (cust[0] < chefFinish) {
                chefFinish += cust[1];
            } else {
                chefFinish = cust[1] + cust[0];
            }
            time += chefFinish - cust[0];
            
        }

        return time / n;
    }
};
