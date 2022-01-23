class Solution:
    def findTheWinner(self, n: int, k: int) -> int:
        q = list(range(1,n+1))
                while len(q) >1:
            # new step
            ind=1
            while (ind < k):
                ind+=1
            ind = ind if ind < len(q)  else (ind)%len(q)
            # print(ind)
            q.pop(ind-1)
            # print("before",q,ind)
            if ind != 0:
                q = q[ind-1:]+q[:ind-1]
            # print("after",q)
        return q[0]