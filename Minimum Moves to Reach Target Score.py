class Solution:
    def minMoves(self, target: int, maxDoubles: int) -> int:
        res= 0
        incs = 0
        while (target>1 and maxDoubles > 0):
            # print(target,res,maxDoubles,incs)
            if target %2 == 0:
                maxDoubles -=1
                res+=1
                target =target//2
                            elif target %2 == 1:
                incs+=1
                target -=1
                res+=1        
        if target >1:
            res+= target-1
                # print(res,maxDoubles,incs)
        return res