class Solution:
    def maxSpending(self, values: List[List[int]]) -> int:
        newArr = []
        for m in values:
            for i in m:
                newArr.append(i)
        
        newArr.sort()
        total = 0
        for i in range(len(values) * len(values[0])):
            total += (i+1) * newArr[i]
        
        return total
