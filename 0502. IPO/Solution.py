class Solution:
    def findMaximizedCapital(self, k: int, w: int, profits: List[int], capital: List[int]) -> int:
        newArr = []
        for i in range(len(profits)):
            newArr.append([capital[i], profits[i]]) # push back capital and profit
        
        newArr.sort(reverse = True) # end of list has the lowest capital that we can afford

        heap = []
        heapify(heap)

        curCapital = w

        for i in range(k):
            while newArr and newArr[-1][0] <= curCapital:
                heapq.heappush(heap, -newArr[-1][1])
                newArr.pop()
                
            if (len(heap) != 0):
                curCapital += -heapq.heappop(heap)
            else:
                return curCapital
        
        return curCapital
