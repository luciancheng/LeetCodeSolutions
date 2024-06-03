class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp;
        vector<string> parsed;

        stringstream ss(s);  
        string word;
        while (ss >> word) { // Extract word from the stream.
            parsed.push_back(word);
        }

        if (parsed.size() != pattern.size()) return false;

        for (int i = 0; i < pattern.size(); i++) {
            bool exists = false;
            for (auto j : mp) {
                if (j.second == parsed[i]) exists = true; // already exists
            }
            if (mp.count(pattern[i]) == 0 && !exists) {
                mp[pattern[i]] = parsed[i];
            } else {
                if (mp[pattern[i]] != parsed[i]) return false;
            }
        }

        return true;
    }
};
