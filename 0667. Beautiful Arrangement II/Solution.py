class Solution:
    def constructArray(self, n: int, k: int) -> List[int]:
        # answer must have int from the range [1, n], must have all n integers
        # position answer in a way such that the abs between adjacent indices aray gives k unique numbers
        # for a value n, we can have at most k = n-1 distinct integers
        if n == 0:
            return []

        ans = []
        left = 1
        right = n
        increase = False
        
        for i in range(k):
            if increase:
                ans.append(right)
                right -= 1
                increase = False
            else:
                ans.append(left)
                left += 1
                increase = True
        
        while len(ans) < n:
            if increase:
                ans.append(left)
                left += 1
            else:
                ans.append(right)
                right -= 1
        
        return ans
            

        


        
        
