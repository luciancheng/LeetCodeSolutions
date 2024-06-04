class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        // can edit the vector in place
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (obstacleGrid[i][j] != 1) {
                    if (i == 0 && j == 0) { // first square
                        obstacleGrid[i][j] = 1;
                    } else if (i == 0) { // top row
                        obstacleGrid[i][j] = obstacleGrid[i][j-1];
                    } else if (j == 0) { // first column
                        obstacleGrid[i][j] = obstacleGrid[i-1][j];
                    } else { // any other square
                        obstacleGrid[i][j] = obstacleGrid[i-1][j] + obstacleGrid[i][j-1];
                    }
                } else {
                    obstacleGrid[i][j] = 0;
                }
            }
        }

        return obstacleGrid[m-1][n-1];

    }
};
