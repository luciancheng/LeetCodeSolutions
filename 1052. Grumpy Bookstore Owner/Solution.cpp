class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int originalTotal = 0;
        
        // Calculate the initially satisfied customers
        for (int i = 0; i < n; i++) {
            if (!grumpy[i]) {
                originalTotal += customers[i];
            }
        }

        int maxIncrease = 0, currentIncrease = 0;

        // Sliding window to find the maximum possible increase
        for (int i = 0; i < n; i++) {
            if (grumpy[i]) {
                currentIncrease += customers[i];
            }
            if (i >= minutes && grumpy[i - minutes]) {
                currentIncrease -= customers[i - minutes];
            }
            maxIncrease = max(maxIncrease, currentIncrease);
        }

        return originalTotal + maxIncrease;
    }
};
