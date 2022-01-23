class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        d= {}
        for i in nums:
            d[i]= d.get(i, 0) + 1
                res = 0
        for n in d.values():
            if n >1:
                res += int(n*(n-1)/2)
        return res
                                