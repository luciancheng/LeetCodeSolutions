class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int diff = 0;
        unordered_map<int, int> mp;
        mp[0] = -1;
        int longest = 0;

        for (int i = 0; i < nums.size(); i++) {
            diff += nums[i] ? 1 : -1;

            if (mp.count(diff) == 0) {
                mp[diff] = i;
            } else {
                longest = max(longest, i - mp[diff]);
            }
        }
        return longest;
    }
};
