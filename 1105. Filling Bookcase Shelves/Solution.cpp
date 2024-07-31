class Solution {
public:
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        unordered_map<int, int> dp;
        return dfs(books, shelfWidth, 0, dp);
    }

    int dfs(vector<vector<int>> & books, int shelfWidth, int idx, unordered_map<int, int> & dp) {
        if (idx == books.size()) return 0;

        if (dp.count(idx) != 0) return dp[idx];

        int curWidth = shelfWidth;
        int curRowHeight = 0;
        int res = INT_MAX;
        for (int i = idx; i < books.size(); i++) {
            int thickness = books[i][0];
            int height = books[i][1];
            
            curRowHeight = max(height, curRowHeight);
            curWidth -= thickness; 
            if (curWidth >= 0) {
                // run another dfs
                res = min(res, dfs(books, shelfWidth, i + 1, dp) + curRowHeight);
            } else {
                break;
            }
        }
        dp[idx] = res;
        return res;
    }
};
