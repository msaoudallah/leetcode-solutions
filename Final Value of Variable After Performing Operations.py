class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        res=0
        for i in operations:
            op=i[1]
            res= res+1 if op =='+' else res-1
                return res