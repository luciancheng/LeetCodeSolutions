class UnionFind():
    def __init__(self, n):
        self.parents = [i for i in range(n)]
        self.rank = [1] * n

    def find(self, x):
        while self.parents[x] != x:
            self.parents[x] = self.parents[self.parents[x]]
            x = self.parents[x]
        return x
    
    def union(self, x, y):
        p1, p2 = self.find(x), self.find(y)

        if p1 == p2:
            return False
        if self.rank[p1] > self.rank[p2]:
            self.parents[p2] = p1
            self.rank[p1] += self.rank[p2]
        else:
            self.parents[p1] = p2
            self.rank[p2] += self.rank[p1]
        return True

class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        n = len(isConnected)
        UF = UnionFind(n)
        visited = [False for i in range(n)]

        for i in range(n):
            if not visited[i]:
                for j in range(n):
                    if (isConnected[i][j]):
                        visited[j]
                        UF.union(i, j)
        
        s = set()
        for i in range(n):
            s.add(UF.find(i))

        return len(s)
