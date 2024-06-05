class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == 0) {
                    matrix[i][j] += min(matrix[i-1][j], matrix[i-1][j+1]);
                } else if (j == n-1) {
                    matrix[i][j] += min(matrix[i-1][j], matrix[i-1][j-1]);
                } else {
                    int curmin = min(matrix[i-1][j], matrix[i-1][j-1]);
                    matrix[i][j] += min(matrix[i-1][j+1], curmin);
                }
            }
        }

        int ans = INT_MAX;
        for (int j = 0; j < n; j++) {
            ans = min(ans, matrix[n-1][j]);
        }
        return ans;
    }
};
