class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        unordered_set<int> rowsWithZeros;
        unordered_set<int> colsWithZeros;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    rowsWithZeros.insert(i);
                    colsWithZeros.insert(j);
                }
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (rowsWithZeros.count(i) != 0 || colsWithZeros.count(j) != 0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
