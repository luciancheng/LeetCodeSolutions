class Solution {
public:
    unordered_set<string> mineLocations; // fill with serialized locations of mines, M or X
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        int m = board.size();
        int n = board[0].size();

        // click is the coordinate in the grid where we click
        // we will only ever click on M or E

        // if we click an empty square, recursively change all other adjacent empty squares to be revealed with either a b or a digit 1-8 which describes the number of adjacent unreleaved mines
        // if we click M then just return that board

        int r = click[0];
        int c = click[1];

        // if its a mine we already lost
        if (board[r][c] == 'M') {
            board[r][c] = 'X';
            return board;
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'M' || board[i][j] == 'X') {
                    string pos = to_string(i) + ',' + to_string(j);
                    mineLocations.insert(pos);
                }
            }
        }

        // recursion
        // if theres no adjacent mines on this square, we can move onto the next
        // if there is adjacent mines, count the number, set the number in the square then stop the recursive call
        dfs(board, r, c);

        return board;

    }

    void dfs(vector<vector<char>> & board, int i, int j) {
        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size()) return; // went out of bounds
        if (board[i][j] != 'E') return; // square is already visited, we only want to check unvisted squares

        // check adjacent squares for bombs
        vector<pair<int, int>> neighbours = {{i + 1, j}, {i - 1, j}, {i, j + 1}, {i, j - 1}, {i + 1, j + 1}, {i + 1, j - 1}, {i - 1, j + 1}, {i - 1, j - 1}};

        int adjacentMines = 0;
        for (const auto & [r, c] : neighbours) {
            string adjpos = to_string(r) + ',' + to_string(c);
            if (mineLocations.count(adjpos) != 0) {
                adjacentMines++;
            }
        }

        if (adjacentMines > 0) {
            board[i][j] = adjacentMines + '0'; // dont do a dfs here
        } else {
            // no adjancet mines, we can keep looking
            board[i][j] = 'B'; // blank square, we can keep looking
            for (const auto & [r, c] : neighbours) {
                dfs(board, r, c);
            }   
        }

    }
};
