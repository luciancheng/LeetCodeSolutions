class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if (n % groupSize != 0) return false;

        unordered_map<int, int> mp; // get the freq of each number
        for (int num : hand) mp[num]++;

        sort(hand.begin(), hand.end());

        for (int i = n-1; i >= groupSize - 1; i--) {
            int curNum = hand[i];
            if (mp[curNum] > 0) {
                for (int j = 0; j < groupSize; j++) {
                    if (mp[curNum-j] > 0) {
                        mp[curNum-j]--;
                    } else {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
