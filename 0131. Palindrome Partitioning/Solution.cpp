class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        for (int i = 0; i < n/2; i++) {
            if (s[i] != s[n-1-i]) return false;
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> cur;
        recur(s, 0, ans, cur);
        return ans;
    }

    void recur(string s, int idx, vector<vector<string>> & ans, vector<string> & cur) {
        if (idx >= s.size()) {
            ans.push_back(cur);
        }

        for (int i = 1; i <= s.size() - idx; i++) { // iterate through size of string
            string str = s.substr(idx, i);
            if (isPalindrome(str)) {
                cur.push_back(str);
                recur(s, idx + i, ans, cur);
                cur.pop_back();
            }
        }
    }
};
