class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        mp = {}
        numDivided = 0
        cur = 0

        for i in nums:
            cur += i
            rem = cur % k
            if rem not in mp:
                if rem == 0:
                    mp[rem] = 1
                else:
                    mp[rem] = 0
            else:
                mp[rem] += 1
            
            numDivided += mp[rem]
        
        return numDivided
