class Solution:
    def largestLocal(self, grid: List[List[int]]) -> List[List[int]]:
        ans = []

        n = len(grid)

        l = 0
        r = 2
        b = 0
        t = 2

        while (t < n):
            l = 0
            r = 2
            rowArr = []
            while (r < n):
                maxNum = float("-inf")
                for i in range(l, r+1):
                    for j in range(b, t+1):
                        maxNum = max(maxNum, grid[j][i])
                r += 1
                l += 1
                
                rowArr.append(maxNum)

            ans.append(rowArr)
            
            r = 2
            l = 0
            b += 1
            t += 1

        return ans
