class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        int minNum = INT_MAX;
        int maxNum = INT_MIN;
        for (int i : nums) {
            mp[i]++;
            maxNum = max(maxNum, i);
            minNum = min(minNum, i);
        }

        int totalmoves = 0;
        for (int i = minNum; i <= maxNum; i++) {
            if (mp[i] > 1) {
                int initialcount = mp[i];
                totalmoves += initialcount - 1;
                mp[i+1] += initialcount - 1;
                maxNum = max(maxNum, i+1);
            }
        }

        return totalmoves;

    }
};
