class UnionFind {
public:
    vector<int> parents;
    vector<int> ranks;
    UnionFind(int n) {
        parents = vector<int>(n);
        for (int i = 0; i < n; i++) {
            parents[i] = i;
        }

        ranks = vector<int>(n, 1);
    }

    int find(int x) {
        while (x != parents[x]) {
            parents[x] = parents[parents[x]];
            x = parents[x];
        }
        return x;
    }

    int Union(int a, int b) {
        int p1 = find(a);
        int p2 = find(b);

        if (p1 == p2) {
            return false;
        }

        if (ranks[p1] > ranks[p2]) {
            parents[p2] = p1;
            ranks[p1] += ranks[p2];
        } else {
            parents[p1] = p2;
            ranks[p2] += ranks[p1];
        }
        return true;
    }
};

class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        UnionFind * UF = new UnionFind(n);
        unordered_map<int, vector<int>> rows;
        unordered_map<int, vector<int>> cols;

        for (int i = 0; i < n; i++) {
            int r = stones[i][0];
            int c = stones[i][1];

            // map each available row and col of a coordinate of a rock to its corresponding index in stones, use this same index to do a union of these indices, hashmap for lookup
            // may be multiple points that have the same row or col, take their indexes and union them all together
            rows[r].push_back(i);
            cols[c].push_back(i); 
        }

        for (int i = 0; i < n; i++) {
            int r = stones[i][0];
            int c = stones[i][1];

            for (const auto & j : rows[r]) { // get all indices with matching rows
                UF->Union(i, j);
            }

            for (const auto & j : cols[c]) { // get all indices with matching rows
                UF->Union(i, j);
            }
        }
        
        // number we can remove if the total number of stones - # of different union groups
        set<int> uniqueParents;

        // cant just go through parents, since one node may point to another node as its parent, but then that parent node might also point to another
        // go through each index and use the find to get its actual parent and save all unique parents
        for (int i = 0; i < n; i++) {
            uniqueParents.insert(UF->find(i));
        }

        int ans = 0;

        for (const auto & par : uniqueParents) {
            ans += UF->ranks[par] - 1;
        } 

        return ans;
    }
};
