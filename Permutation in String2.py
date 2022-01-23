class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s1) > len(s2):
            return False
        start = 0
        window = ""
        end = 0
        while end < (len(s2)):
            window += s2[end]
            while len(window) >= len(s1):
                d = {}
                for s in s1:
                    d[s] = d.get(s, 0)+1
                for s in window:
                    if s in s1:
                        d[s] = d.get(s, 0)-1
                f= True
                for v in d.values():
                    if v !=0:
                        f= False
                if f:                
                    return True
                                start += 1
                end += 1
                window = s2[start:end+1]
            end += 1
        return False