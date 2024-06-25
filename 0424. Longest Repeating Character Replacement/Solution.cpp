class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;
        int length = 0;
        int ans = 0;
        int l = 0;
        int maxCount = 0;
        for (int r = 0; r < s.size(); r++) {
            mp[s[r]]++;
            length++;
            maxCount = max(maxCount, mp[s[r]]);
            while (length - maxCount > k) {
                mp[s[l]]--;
                l++;
                length--;
            }

            ans = max(ans, r - l + 1);

        }
        return ans;
    }
};
