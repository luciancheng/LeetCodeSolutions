class Solution {
public:
    bool isVowel(char letter) {
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') return true;
        return false;
    }

    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans(queries.size());
        vector<int> numVec;
        numVec.push_back(0);
        int prev = numVec[0];
        for (string word : words) {
            int n = word.size();
            if (isVowel(word[0]) && isVowel(word[n-1])) {
                numVec.push_back(prev + 1);
            } else {
                numVec.push_back(prev);
            }
            prev = numVec[numVec.size() - 1];
        } 

        for (int i = 0; i < queries.size(); i++) {
            int left = queries[i][0];
            int right = queries[i][1];
            ans[i] = numVec[right+1] - numVec[left];
        }    
        return ans;
    }
};
