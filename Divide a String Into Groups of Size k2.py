class Solution:
    def divideString(self, s: str, k: int, fill: str) -> List[str]:
        res=[]
        for i in range(0,len(s)-k+1,k):
            res.append(s[i:i+k])
                rem = len(s)% k 
        if rem !=0:
            last = s[-rem:]
            last += fill*(k-rem)
            res.append(last)
        return res    