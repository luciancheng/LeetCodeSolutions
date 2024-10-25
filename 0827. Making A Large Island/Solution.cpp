class Solution {
public:
    int largestIsland(vector<vector<int>>& grid) {
        // change 1 bit from 0 to an island
        // do a union find and find out how big each island is, then try placing a 1 everywhere and seeing how big a unioned version of all islands would be
        // do a dfs, and count the size of an island and provide it a id of which island it is,
        // map island id to its size, so we can look it up after
        // after go through all squares and try and palce a 1 and see if it will join any islands, then we can just add its sum
        // dont modify this because we sill need it
        int m = grid.size();
        int n = grid[0].size();

        unordered_map<int, int> islandSizes;
        int curId = 2;

        int maxSize = 0;
        // map all individual islands to their island size
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // we reached an unvisited island
                if (grid[i][j] == 1) {
                    int islandSize = dfs(grid, i, j, curId);
                    // maxSize could just be one of these islands and we woudlnt know
                    maxSize = max(maxSize, islandSize); // biggest island without placing any other land
                    islandSizes[curId] = islandSize; // hash the island id to its size for easy look up
                    curId++;
                }
            }
        }

        // try and place a piece of land somewhere that will join islands, only place it in 0s, dont need to waste checking by placing it in non 0 spots, only in water

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // see what happens if we place a 1 here, check all adjacent 4 direcitons to see if we can increase the size 
                if (grid[i][j] == 0) {
                    unordered_set<int> adjacentids;
                    vector<pair<int,int>> neighbours = {{i + 1, j}, {i - 1, j}, {i, j + 1}, {i, j - 1}};
                    for (const auto &[r, c] : neighbours) {
                        // if the neighbour is in bounds, add the island id into the adjacent set
                        if (r >= 0 && c >= 0 && r < m && c < n) { 
                            adjacentids.insert(grid[r][c]); // use a set to get rid of duplicates
                        }
                    }

                    int cursize = 1;
                    for (const int & id : adjacentids) {
                        cursize += islandSizes[id];
                    }

                    maxSize = max(maxSize, cursize);
                }
            }
        }


        return maxSize;
    }

    int dfs(vector<vector<int>> & grid, int i, int j, int islandId) {
        // if out of bounds, return 0
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid.size()) return 0;
        // if its not 1, that means its either been checked before or its water
        if (grid[i][j] != 1) return 0; // return 0 since we dont want to check

        grid[i][j] = islandId; // mark it as seen with an island id, >= 2, becuase 0 already repesents water and 1 repesents unvisited land
        int res = 0;    

        res += dfs(grid, i + 1, j, islandId);
        res += dfs(grid, i - 1, j, islandId);
        res += dfs(grid, i, j + 1, islandId);
        res += dfs(grid, i, j - 1, islandId);

        return res + 1; // increment by 1 for the current island we are on
    }
};
