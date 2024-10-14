class Solution {
public:
    vector<vector<string>> groupStrings(vector<string>& strings) {
        // mod 26 when doing shifting
        // same shifting sequence, have to all be same size, and the difference in number between each successive letter must be the same

        // find a way to hash it properly to store it
        map<vector<int>, vector<string>> mp;

        for (const string & seq : strings) {
            
            // check 2 letters at a time to see the difference

            int n = seq.size();
            vector<int> changeseq;
            for (int i = 0; i < n - 1; i++) {
                char cur = seq[i];
                char next = seq[i + 1];
                int change = next - cur;
                if (change < 0) change += 26;
                changeseq.push_back(change);
            }
            mp[changeseq].push_back(seq);
        }

        // -25 is the same as -25 + 26 = 1
        vector<vector<string>> ans;

        for (const auto &[seq, words] : mp) {
            ans.push_back(words);
        }

        return ans;
    }
};
