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
                this->ranks[p2] += this->ranks[p1];
            }
        }
};

class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        UnionFind * UF = new UnionFind(n);

        for (const auto & edge : edges) {
            UF->Union(edge[0], edge[1]);
        }

        set<int> s;
        for (int i = 0; i < n; i++) {
            s.insert(UF->find(i));
        }

        return s.size();
    }
};
