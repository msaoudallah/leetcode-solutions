class Solution:
    def findTheWinner(self, n: int, k: int) -> int:
        q = list(range(1,n+1))
                while len(q) >1:
            # new step
            # ind=1
            # while (ind < k):
            #     ind+=1
            # ind = ind if ind < len(q)  else (ind)%len(q)
            # print(ind)
            ind = (k-1)%len(q)
            q.pop(ind)
            if ind != 0:
                q = q[ind:]+q[:ind]
            # print("after",q)
        return q[0]