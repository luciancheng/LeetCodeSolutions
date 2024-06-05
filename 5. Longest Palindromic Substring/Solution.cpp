class Solution {
public:
    string longestPalindrome(string s) {
        string longestSubsequence = "";

        for (int i = 0; i < s.size(); i++) {
            // check 1 letter in middle

            int left = i, right = i;

            while (left >= 0 && right < s.size()) {
                if (s[left] == s[right]) {
                    int strLen = right - left + 1;
                    string subString = s.substr(left, strLen);
                    if (subString.size() > longestSubsequence.size()) {
                        longestSubsequence = subString;
                    }
                } else {
                    break;
                }

                left--;
                right++;
            }

            // check 2 letter in middle
            left = i, right = i+1;

            while (left >= 0 && right < s.size()) {
                if (s[left] == s[right]) {
                    int strLen = right - left + 1;
                    string subString = s.substr(left, strLen);
                    if (subString.size() > longestSubsequence.size()) {
                        longestSubsequence = subString;
                    }
                } else {
                    break;
                }

                left--;
                right++;
            }
        }

        return longestSubsequence;
    }
};
