class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> ans;
        int totalSquares = rows * cols;

        int curRow = rStart;
        int curCol = cStart;
        int rowMax = rStart;
        int rowMin = rStart;
        int colMax = cStart + 1;
        int colMin = cStart;

        char direction = 'r';

        for (int i = 0; i < totalSquares; i++) {
            ans.push_back({curRow, curCol});

            // when we reach the end, we need to expand the bounds of the next direction, and begin moving
            do {
                if (direction == 'r') {
                    curCol++;
                    if (curCol == colMax) {
                        direction = 'd';
                        rowMax = min(rows + 1, ++rowMax);
                    }
                } else if (direction == 'd') {
                    curRow++;
                    if (curRow == rowMax) {
                        direction = 'l';
                        colMin = max(-1, --colMin);
                    }
                } else if (direction == 'l') {
                    curCol--;
                    if (curCol == colMin) {
                        direction = 'u';
                        rowMin = max(-1, --rowMin);
                    }
                } else {
                    curRow--;
                    if (curRow == rowMin) {
                        direction = 'r';
                        colMax = min(cols + 1, ++colMax);
                    }
                }
            } while ((curCol >= cols || curCol < 0 || curRow >= rows || curRow < 0) && ans.size() != totalSquares);
              // while out of bounds, keep cycling until were back in bounds of the box
        }      

        return ans;
    }
};
