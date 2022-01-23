class Solution:
    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        l=0
        r = len(letters)-1
        ans=letters[0]
        while (l<=r):
            m = (l+r)//2
            if (letters[m]== target):
                l= m+1
            elif letters[m] > target:
                ans = letters[m]
                r = m-1
            elif letters[m] < target:
                l = m+1
                return ans