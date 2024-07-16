class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> cur;
        set<pair<int,int>> pos;
        recur(n, cur, pos, ans, 0);
        return ans;
    }

    void recur(int n, vector<string> & cur, set<pair<int,int>> & pos, vector<vector<string>> & ans, int curRow) {
        if (pos.size() == n) {
            ans.push_back(cur);
            return;
        }

        for (int i = 0; i < n; i++) {
            bool canPlace = true;
            for (const auto &[r, c] : pos) {
                // if its in same column
                if (i == c) canPlace = false;

                // if its in same diagonal
                if (abs(r - curRow) == abs(i - c)) canPlace = false;
            }
            if (canPlace) {
                pair<int,int> newPos = {curRow, i};
                pos.insert(newPos);
                string queenPos = "";
                for (int j = 0; j < n; j++) {
                    if (j == i) queenPos += 'Q';
                    else queenPos += '.';
                }

                cur.push_back(queenPos);

                recur(n, cur, pos, ans, curRow + 1);

                cur.pop_back();
                pos.erase(newPos);
            }
        }


    }
};
