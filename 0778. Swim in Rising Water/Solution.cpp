class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> heap;
        heap.push_back({0, 0, 0});
        make_heap(heap.begin(), heap.end());

        vector<vector<bool>> visited(m, vector<bool>(n, false));

        while (!heap.empty()) {
            vector<int> top = heap[0];
            pop_heap(heap.begin(), heap.end());
            heap.pop_back();

            int time = -top[0];
            int i = top[1];
            int j = top[2];

            //cout << i << " " << j << " " << time << endl;

            if (i == m - 1 && j == n - 1) return time;

            vector<vector<int>> neighbours = {{i + 1, j}, {i - 1, j}, {i, j + 1}, {i, j - 1}};

            for (const auto & nei : neighbours) {
                int row = nei[0];
                int col = nei[1];

                // must be in bounds
                if (row >= 0 && col >= 0 && row < m && col < n && !visited[row][col]) {
                    // next time to reach a square is the difference between the hegihts, if we we are going down, then time increase is 0
                    // wieghted edges based on the height
                    int nextheight = max(grid[row][col], time);
                    int curheight = max(grid[i][j], time);

                    int nexttime = 0;
                    if (nextheight != curheight) {
                        nexttime = max(nextheight, curheight) - time;
                    } 

                    heap.push_back({- time - nexttime, row, col});
                    push_heap(heap.begin(), heap.end());

                    visited[row][col] = true;
                }
            }
        }
        return 0;
    }
};
