class unionfind {
public:
    vector<int> parents;
    vector<int> ranks;
    int disjoints;
    unionfind(int n) {
        for (int i = 0; i < n + 1; i++) {
            parents.push_back(i);
            ranks.push_back(1);
        }
        disjoints = n + 1;
    }

    int find(int x) {
        while (parents[x] != x) {
            parents[x] = parents[parents[x]];
            x = parents[x];
        }

        return x;
    }
    
    bool unionNodes(int a, int b) {
        int p1 = find(a);
        int p2 = find(b);

        if (p1 == p2) {
            return false;
        } else if (ranks[p1] > ranks[p2]) {
            parents[p2] = p1;
            ranks[p1] += ranks[p2];
        } else {
            parents[p1] = p2;
            ranks[p2] += ranks[p1];
        }
        disjoints--; // keep track of how many unique disjoint sets there are, if n == 1, then there is only 1 set and that means its fully connected
        return true;
    }

    bool isConnected() {
        return disjoints == 2;
    }

};

class Solution {
public:
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        unionfind UF1 = unionfind(n);
        unionfind UF2 = unionfind(n);

        int removal = 0;

        for (auto i : edges) { // do all type 3 edges first since they have higher priority because they can be traversed by both, so its better to use these first
            if (i[0] == 3) {
                int a = i[1];
                int b = i[2];

                bool need1 = UF1.unionNodes(a, b);
                bool need2 = UF2.unionNodes(a, b);

                if (!need1 && !need2) { // if they are already apart of the same group, then this isnt edge isnt needed
                    removal++;
                }
            } 
        }

        for (auto i : edges) {
            if (i[0] == 1) {
                if (!UF1.unionNodes(i[1], i[2])) {
                    removal++;
                }
            } else if (i[0] == 2) {
                if (!UF2.unionNodes(i[1], i[2])) {
                    removal++;
                }
            }
        }

        if (UF1.isConnected() && UF2.isConnected()) return removal;
        return -1;
    }
};
