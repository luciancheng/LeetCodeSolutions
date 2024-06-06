class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        // select 1 children every turn until k turns where u have selected k children
        long long maxHappiness = 0;
        sort(happiness.begin(), happiness.end());

        int n = happiness.size();
        for (int i = 0; i < k; i++) {
            maxHappiness += max(happiness[n-1-i] - i, 0);
        }
        return maxHappiness;
    }
};
