class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s1) > len(s2):
            return False
        c1, c2 = Counter(s1), Counter(s2[:len(s1)])
        i = 0
        for i in range(len(s2)):
            if c1 == c2:
                return True
            c2[s2[i]] -= 1
            c2[s2[i+len(s1)-len(s2)]] += 1
            c2 = Counter({k: c for k, c in c2.items() if c > 0})
        return False
        