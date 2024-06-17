class Solution:
    def findPairs(self, nums: List[int], k: int) -> int:
        ans = 0

        mp = Counter(nums)

        # only need to check if key + k exists, not key-k since we would aready check for that combo
        if k == 0:
            for i in mp:
                if mp[i] > 1:
                    ans += 1
        else:
            for i in mp:
                if i + k in mp:
                    ans += 1

        return ans
