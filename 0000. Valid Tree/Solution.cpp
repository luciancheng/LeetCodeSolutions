class UnionFind {
public:
    vector<int> parents;
    vector<int> ranks;
    UnionFind(int n) {
        parents = vector<int>(n);
        ranks = vector<int>(n, 1);
        for (int i = 0; i < n; i++) {
            parents[i] = i;
        }
    }

    int find(int x) {
        while (x != this->parents[x]) {
            this->parents[x] = this->parents[this->parents[x]];
            x = this->parents[x];
        }
        return x;
    }

    bool Union(int a, int b) {
        int p1 = this->find(a);
        int p2 = this->find(b);

        if (p1 == p2) {
            return false;
        }

        if (this->ranks[p1] > this->ranks[p2]) {
            this->parents[p2] = p1;
            this->ranks[p1] += this->ranks[p2];
        } else {
            this->parents[p1] = p2;
            this->ranks[p2] += this->parents[p1];
        }

        return true;
    }
    
    

};


class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        // if we add a redundant edge, then it will form a cycle if we assume that no we dont ahve dupliates

        // cycles will make this not a valid graph tree
        // should only have 1 connected component
        UnionFind * UF = new UnionFind(n);

        for (const auto & edge : edges) {
            if (!UF->Union(edge[0], edge[1])) return false;
        }

        // check for 1 connected component using their parents
        int p = UF->find(0);

        for (int i = 1; i < n; i++) {
            if (UF->find(i) != p) return false;
        }

        return true;
    }
};
