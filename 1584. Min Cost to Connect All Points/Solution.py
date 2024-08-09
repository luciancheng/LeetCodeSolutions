class Solution:
    def minCostConnectPoints(self, points: List[List[int]]) -> int:
        adj = defaultdict(list)
        n = len(points)

        # create an edge to each other node and contain the manhattan distance
        for i in range(n):
            for j in range(i + 1, n):
                p1 = points[i]
                p2 = points[j]

                manhattan = abs(p1[0] - p2[0]) + abs(p1[1] - p2[1])

                # create adjacency list for each point cconnected to every other node with its manhattan distance
                adj[tuple(p1)].append((manhattan, p2))
                adj[tuple(p2)].append((manhattan, p1))


        visited = set()
        frontier = [] # contains all nodes that we can visit from a current node
        heapq.heapify(frontier)

        heapq.heappush(frontier, (0, points[0]))

        ans = 0
        while len(visited) != n:
            front = frontier[0]
            heapq.heappop(frontier)

            if tuple(front[1]) in visited:
                continue
    
            ans += front[0]

            visited.add(tuple(front[1]))

            for nextnodes in adj[tuple(front[1])]:
                heapq.heappush(frontier, nextnodes)





        return ans
