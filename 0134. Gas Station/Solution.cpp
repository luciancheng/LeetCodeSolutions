class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        for (int i = 0; i < gas.size(); i++) {
            gas[i] -= cost[i]; // get the net gas diff at this gas station
        }
        
        int curGas = 0;
        int bestIdx = INT_MAX;
        int maxGas = 0;
        for (int i = gas.size() - 1; i >= 0; i--) {
            if (curGas + gas[i] >= maxGas) {
                bestIdx = i;
            }
            curGas += gas[i];
            maxGas = max(curGas, maxGas);
        }

        if (curGas < 0) return -1;
    
        return bestIdx;
    }
};
