class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> ss;

        int maxSize = 0;
        int l = 0;
        for (int r = 0; r < s.size(); r++) {
            if (ss.count(s[r]) == 0) {
                ss.insert(s[r]);
            } else {
                while (ss.count(s[r]) != 0) {
                    ss.erase(s[l]);
                    l++;
                }
                ss.insert(s[r]);
            }
            maxSize = max(maxSize, r - l + 1);
        }

        return maxSize;
    }
};
