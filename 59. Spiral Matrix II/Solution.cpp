class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n, 0));

        int row = 0;
        int col = 0;

        ans[0][0] = 1;
        int curNum = 1;

        bool incCol = true;
        bool incRow = false;
        bool decCol = false;
        bool decRow = false;


        for (int i = 1; i < n*n; i++) {
            bool good = true;
            if (incCol) {
                if (col < n - 1 && ans[row][col+1] == 0) {
                    col++;
                } else {
                    incCol = false;
                    incRow = true;
                }
                good = false;
            }
            if (incRow) {
                if (row < n-1 && ans[row + 1][col] == 0) {
                    row++;
                } else {
                    incRow = false;
                    decCol = true;
                }
            }
            if (decCol) {
                if (col > 0 && ans[row][col-1] == 0) {
                    col--;
                } else {
                    decCol = false;
                    decRow = true;
                }
            }
            if (decRow) {
                if (row > 0 && ans[row-1][col] == 0) {
                    row--;
                } else {
                    decRow = false;
                    incCol = true;
                }
            }
            if (incCol && good) {
                if (col < n - 1 && ans[row][col+1] == 0) {
                    col++;
                } else {
                    incCol = false;
                    incRow = true;
                }
            }

            curNum++;
            ans[row][col] = curNum;
        }
        return ans;
        
    }
};
