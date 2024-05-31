class Solution {
public:
    bool inBounds(int r, int c, int n) {
        return min(r,c) >= 0 && max(r,c) < n;
    }

    bool checkValidGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        int r = 0;
        int c = 0;
        for (int i = 0; i < n*n; i++) {
            bool found = false;
            int curNum = grid[r][c];

            vector<vector<int>> availableMoves = {{r+2, c+1}, {r+1, c+2}, {r-1, c+2}, {r-2, c+1}, {r-2, c-1}, {r-1,c-2}, {r+1, c-2}, {r+2, c-1}};

            for (auto & move : availableMoves) {
                int r2 = move[0];
                int c2 = move[1];

                if (inBounds(r2, c2, n)) {
                    if (grid[r2][c2] == curNum + 1) {
                        r = r2;
                        c = c2;
                        found = true;
                        break;
                    }
                }
            }
            if (!found && i != n*n - 1) return false;
        }
        return true;
    }
};
