class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        start = 0
        d = {}
        res = 0
        i = 0
        while i < len(s):
            d[s[i]] = d.get(s[i], 0)+1
            if d[s[i]] > 1:
                res = max(res, i-start)
                # d[s[i]] =1
                start = start+1
                i = start-1
                d = {}
            i += 1
        res = max(res, i-start)
        return res