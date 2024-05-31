class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int numPairs = 0;
        vector<string> row;
        vector<string> col;

        for (int i = 0; i < n; i++) {
            string curRow;
            for (int j = 0; j < n; j++) {
                curRow += to_string(grid[i][j]) + ',';
            }
            row.push_back(curRow);
        }

        for (int i = 0; i < n; i++) {
            string curCol;
            for (int j = 0; j < n; j++) {
                curCol += to_string(grid[j][i]) + ',';
            }
            col.push_back(curCol);
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (row[i] == col[j]) numPairs++;
            }
        }

        return numPairs;
    }
};
