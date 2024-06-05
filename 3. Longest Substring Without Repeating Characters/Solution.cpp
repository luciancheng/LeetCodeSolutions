class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0) return 0;
        int maxLen = 1;
        int left = 0;
        int right = 0;

        unordered_set<char> letterSubsequence;

        while (right < s.size()) {
            if (letterSubsequence.count(s[right]) == 0) {
                letterSubsequence.insert(s[right]);
                right++;
                maxLen = max(maxLen, right - left);
            } else {
                letterSubsequence.erase(s[left]);
                left++;
            }
        }

        return maxLen;
    }
};
