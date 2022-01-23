class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        words = s.split(" ")
        rev = [i[::-1] for i in words]
        return ' '.join(rev)
        