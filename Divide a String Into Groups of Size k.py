class Solution:
    def divideString(self, s: str, k: int, fill: str) -> List[str]:
        res=[]
        # loop over string with k groups
        for i in range(0,len(s)-k+1,k):
            res.append(s[i:i+k])
                # remainder of the string that deosn't fit in the k group
        rem = len(s)% k 
        if rem !=0:
            # get the last rem chars
            last = s[-rem:]
            # append the remaining chars with fill
            last += fill*(k-rem)
            # append last string to res
            res.append(last)
        return res    