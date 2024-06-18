class Solution:
    def maximizeSquareArea(self, m: int, n: int, hFences: List[int], vFences: List[int]) -> int:
        if m == n:
            return (m-1) * (n-1) # can always make a square like this

        modulo = int(10**9 + 7)
        
        widths = set()
        vFences.append(n)
        vFences.append(1)
        #vFences.sort()
        for i in range(len(vFences) - 1):
            for j in range(i+1, len(vFences)):
                curWidth = abs(vFences[j] - vFences[i])
                widths.add(curWidth)
            
        maxSquare = -1
        hFences.append(m)
        hFences.append(1)
        #hFences.sort()
        heights = set()
        for i in range(len(hFences) - 1):
            for j in range(i+1, len(hFences)):
                curHeight = abs(hFences[j] - hFences[i])
                heights.add(curHeight)

        inter = widths.intersection(heights)

        if not inter:
            return -1
        
        size = max(inter)

        return (size ** 2) % (10 ** 9 + 7)
