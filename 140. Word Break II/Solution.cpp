class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string> ans;
        recur(s, wordDict, ans, "", 0);
        return ans;
    }

    void recur(string s, vector<string> & wordDict, vector<string> & ans, string curString, int idx) {
        if (idx == s.size()) {
            ans.push_back(curString);
        }
        if (curString.size() != 0) curString += " "; // add space if it has contains letters

        for (auto & word : wordDict) {
            int startingIdx = s.find(word, idx);
            if (startingIdx == idx) {
                int nextIdx = idx + word.size();
                curString += word;

                recur(s, wordDict, ans, curString, nextIdx);

                for (int i = 0; i < word.size(); i++) { // get rid of last word
                    curString.pop_back();
                }
            }
        }
    }
};
