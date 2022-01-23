class Solution:
    def firstUniqChar(self, s: str) -> int:
        letters = [0]*26
        for i in s:
            letters[ord(i)-ord('a')] +=1
                        for ind,i in enumerate(s):
            if letters[ord(i)-ord('a')]==1:
                return ind
        return -1