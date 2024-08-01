class unionfind {
public:
    vector<int> parents;
    vector<int> ranks;
    unionfind(int n) {
        for (int i = 0; i <= n; i++) {
            parents.push_back(i);
        }
        ranks = vector<int>(n+1, 1);
    }

    int find(int x) {
        while (parents[x] != x) {
            parents[x] = parents[parents[x]];
            x = parents[x];
        }
        return x;
    }

    bool unionnodes(int a, int b) {
        int parA = find(a);
        int parB = find(b);

        if (parA == parB) return false;

        if (ranks[parA] > ranks[parB]) {
            parents[parB] = parA; 
            ranks[parA] += ranks[parB];
        } else {
            parents[parA] = parB;
            ranks[parB] += ranks[parA];
        }
        return true;
    }

};

class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        unionfind * UF = new unionfind(n);

        for (const auto & edge : edges) {
            if (!UF->unionnodes(edge[0], edge[1])) return {edge[0], edge[1]};
        }
        return {};
    }
};
