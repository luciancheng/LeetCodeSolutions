class Solution:
    def findDuplicate(self, paths: List[str]) -> List[List[str]]:
        mp = defaultdict(list)

        for path in paths:
            splitpath = path.split()
            for filepath in splitpath[1:]:
                filecontent = filepath.split('(')
                content = filecontent[-1][:-1]
                mp[content].append(splitpath[0] + '/' + filecontent[0])
        
        ans = []

        for (content, path) in mp.items():
            if len(path) >= 2:
                ans.append(path)
        return ans
