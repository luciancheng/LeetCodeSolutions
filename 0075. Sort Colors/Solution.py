class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        # sort 0 then 1 then 2
        start = 0
        n = len(nums)

        for j in range(2):
            for i in range(start, n):
                if (nums[i] == j):
                    temp = nums[i]
                    nums[i] = nums[start]
                    nums[start] = temp
                    start += 1
        
        return nums
        
        

        
