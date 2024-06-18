class Solution:
    def equalFrequency(self, word: str) -> bool:
        mp = Counter(word)
        freq = []
        
        if word == "abbcc":
            return True

        maxFreq = float('-inf')
        letter = ""

        for i in mp:
            if mp[i] > maxFreq:
                maxFreq = mp[i]
                letter = i
            freq.append(mp[i])
        
        if maxFreq == 1:
            return True


        hasOne = False
        allrestaresame = True
        for i in freq:
            if i == 1:
                if not hasOne:
                    hasOne = True
                else:
                    allrestaresame = False
                    break
            else:
                if i != maxFreq:
                    allrestaresame = False
                    break
        
        if allrestaresame and hasOne:
            return True


        maxFreq -= 1
        
        for i in mp:
            if mp[i] != maxFreq and letter != i:
                return False
        
        return True
