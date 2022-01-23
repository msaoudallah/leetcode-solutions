class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        if sum(nums) < target:
            return 0
                start=0
        total=0
        res=len(nums)+1
                for i in range(len(nums)):
            total+= nums[i]
                        while total >= target:
                                res = min(res, i-start+1)
                total-= nums[start]
                start+=1
                    return res
                                