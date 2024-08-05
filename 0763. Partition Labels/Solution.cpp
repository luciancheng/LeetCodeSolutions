class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        vector<int> ans;
        unordered_map<char, int> mp;

        for (int i = 0; i < n; i++) {
            // get last index of a letter seen
            mp[s[i]] = i;
        }

        int start = 0;
        int end = INT_MIN;

        for (int i = 0; i < n; i++) {
            end = max(end, mp[s[i]]);

            if (i == end) {
                ans.push_back(end - start + 1);
                start = i + 1;
            }

        }
        return ans;
    }
};
