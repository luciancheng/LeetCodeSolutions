class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        vector<int> vec1(26, INT_MAX);
        
        int n = words.size();

        for (int i = 0; i < n; i++) {
            vector<int> vec2(26, 0);
            for (auto j : words[i]) {
                vec2[j - 'a']++;
            }
            for (int j = 0; j < 26; j++) {
                vec1[j] = min(vec1[j], vec2[j]);
            }
        }

        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < vec1[i]; j++) {
                string s = "";
                s += i + 'a';
                ans.push_back(s);
            }
        }

        return ans;
    }
};
