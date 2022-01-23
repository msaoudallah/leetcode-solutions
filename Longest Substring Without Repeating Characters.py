class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        maxlen = 0
        start=0
        subs=""
        end=0
        while end < len(s):
            while end < len(s) and s[end] not in subs:
                subs+=s[end]
                end+=1
            maxlen = max(maxlen, len(subs))
            start+=1
            end=start
            subs=""
        return maxlen