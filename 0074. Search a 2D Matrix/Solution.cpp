class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int r = matrix.size() * matrix[0].size() - 1;

        while (l <= r) {
            int mid = (l + r) / 2;
            int j = mid % matrix[0].size();
            int i = mid / matrix[0].size();

            if (matrix[i][j] == target) {
                return true;
            }
            if (matrix[i][j] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return false;
    }
};
