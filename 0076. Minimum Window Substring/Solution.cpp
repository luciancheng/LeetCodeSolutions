class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.size();
        int n = t.size();
        string ans = "";

        unordered_map<char, int> mp;
        for (char i : t) mp[i]++;

        int count = 0;

        int l = 0;
        for (int r = 0; r < m; r++) {
            // if the first letter isnt one that we need and this is the first letter we are checking, just skip it
            if (count == 0 && mp.count(s[r]) == 0) {
                l++;
                continue;
            }

            // if the letter is one that we need, then add that we have seen it
            if (mp.count(s[r]) != 0) {
                count++;
                mp[s[r]]--;
            }

            // shrink the window and save the substring if applicable
            // run this loop while all letters of t are fully covered, since the max value in the hashmap will be <= 0
            while (findMax(mp) <= 0) {
                if (mp.count(s[l]) != 0 && mp[s[l]] == 0) {
                    if (ans.size() == 0) {
                        ans = s.substr(l, r - l + 1);
                    } else {
                        if (r - l + 1 < ans.size()) {
                            ans = s.substr(l, r - l + 1);
                        }
                    }
                }
                
                if (mp.count(s[l]) != 0) {
                    mp[s[l]]++;
                    count--;
                }
                l++;
            }
        }

        return ans;
    }

    int findMax(const unordered_map<char, int> & mp) {
        int maxNum = INT_MIN;
        for (auto i : mp) {
            maxNum = max(maxNum, i.second);
        }
        return maxNum;
    }
};
