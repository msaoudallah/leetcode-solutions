class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        prefix =""
        shortest = strs[0]
        for s in strs:
            if len(s) < len(shortest):
                shortest = s
                for i in range(len(shortest)):
            cnt=0
            for s in strs:
                if s[i] == shortest[i]:
                    cnt+=1
            if cnt == len(strs):
                prefix += shortest[i]
            else:
                break
        return prefix
                                               