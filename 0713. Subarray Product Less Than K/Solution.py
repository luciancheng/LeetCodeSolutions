class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        L = 0
        ans = 0
        prod = 1
        for R in range(len(nums)):
            prod *= nums[R]

            while prod >= k and L <= R:
                prod /= nums[L]
                L += 1
                
            ans += R - L + 1
        
        return ans

        
