class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s) == 0:
            return 0
                longest=1
                p1,p2= 0,1
        res=1
        while (p2 <=len(s)-1):
            # if s[p2] != s[p1]:
            if s[p2] not in s[p1:p2]:
                res+=1
                p2+=1
                # print(s[p1:p2])
            else:
                if p2-p1 < res:
                    p1 = p2
                    p2 +=1
                else:    
                    p1 += 1
                    p2 =p1+1
                res = 1
                        longest = max(longest,res)
        return longest