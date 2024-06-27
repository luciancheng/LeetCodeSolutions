class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        set<int> s;

        for (auto i : edges) {
            for (int e : i) {
                if (s.count(e) == 0) {
                    s.insert(e);
                } else {
                    return e;
                }
            }
        }
        return 0;
    }
};
