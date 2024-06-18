class Solution:
    def leastBricks(self, wall: List[List[int]]) -> int:
        n = len(wall)
        counter = {}

        maxOccurence = 0
        for row in wall:
            for i in range(len(row)-1): # dont need to count the last number
                if i != 0:
                    row[i] += row[i-1]
                
                if row[i] not in counter:
                    counter[row[i]] = 1
                else:
                    counter[row[i]] += 1
                
                maxOccurence = max(maxOccurence, counter[row[i]])
        
        return n - maxOccurence
