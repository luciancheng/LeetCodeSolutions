class Solution:
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
            m = len(grid)
            n = len(grid[0])

            visited = [[False for x in range(n)] for y in range(m)]
            maxSize = 0

            def inBounds(row, col):
                return min(row, col) >= 0 and row < m and col < n
            
            def bfs(i, j):
                q = deque()
                q.append([i, j])
                totalCount = 0
                visited[i][j] = True 

                while q:
                    top = q.popleft()
                    row = top[0]
                    col = top[1]
                    totalCount += 1

                    neighbours = [[row + 1, col], [row-1, col], [row, col+1], [row, col-1]]

                    for nei in neighbours:
                        row2 = nei[0]
                        col2 = nei[1]
                        if inBounds(row2, col2) and not visited[row2][col2] and grid[row2][col2] == 1:
                            q.append([row2, col2])
                            visited[row2][col2] = True # add visited here or else it will show up twice in the queue since its not marked as visited yet

                return totalCount

            for i in range(m):
                for j in range(n):
                    if grid[i][j] == 1 and not visited[i][j]:
                        # do a bfs if its a 1
                        islandSize = bfs(i,j)
                        maxSize = max(maxSize, islandSize)
            
            return maxSize



        
