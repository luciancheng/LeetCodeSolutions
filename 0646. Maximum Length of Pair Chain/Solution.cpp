class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end());

        int numGood = 1;
        int prevRight = pairs[0][1];
        for (int i = 1; i < pairs.size(); i++) {
            vector<int> pair = pairs[i];

            if (pair[0] > prevRight) {
                numGood++;
                prevRight = pair[1];
            } else {
                prevRight = min(prevRight, pair[1]);
            }
        }
        return numGood;
    }
};
