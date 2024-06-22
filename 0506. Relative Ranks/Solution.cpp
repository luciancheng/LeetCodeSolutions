class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans(score.size());

        vector<vector<int>> h;

        make_heap(h.begin(), h.end());

        for (int i = 0; i < score.size(); i++) {
            h.push_back({score[i], i});
            push_heap(h.begin(), h.end());
        }

        int pos = 1;

        while (!h.empty()) {
            vector<int> i = h.front();
            pop_heap(h.begin(), h.end());
            h.pop_back();

            if (pos == 1) {
                ans[i[1]] = "Gold Medal";
            } else if (pos == 2) {
                ans[i[1]] = "Silver Medal";
            } else if (pos == 3) {
                ans[i[1]] = "Bronze Medal";
            } else {
                ans[i[1]] = to_string(pos);
            }
            pos++;
        }
        return ans;
        
    }
};
