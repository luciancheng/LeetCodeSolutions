class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        if (m * k > len(bloomDay)):
            return -1
        if (m * k == len(bloomDay)):
            return max(bloomDay)
        
        r = max(bloomDay)
        l = min(bloomDay)
        n = len(bloomDay)

        lowestDay = r

        def canMake(day):
            totalBoquets = 0
            consecutiveLength = 0

            for i in range(n):
                if bloomDay[i] <= day:
                    consecutiveLength += 1
                    if consecutiveLength == k:
                        totalBoquets += 1
                        consecutiveLength = 0
                else:
                    consecutiveLength = 0

            return totalBoquets

        while (l <= r):
            mid = (l + r) // 2
            if canMake(mid) >= m:
                r = mid - 1
                lowestDay = min(lowestDay, mid)
            else:
                l = mid + 1
    
        return lowestDay
        
