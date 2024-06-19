class Solution:
    def __init__(self):
        self.q = deque()

    def encode(self, strs: List[str]) -> str:
        for i in strs:
            self.q.append(i)

        return ''.join(strs)

    def decode(self, s: str) -> List[str]:
        ans = []
        i = 0
        for j in range(0, len(s)+1):
            substr = s[i:j]
            if self.q and substr == self.q[0]:
                ans.append(substr)
                self.q.popleft()
                i = j
        return ans
