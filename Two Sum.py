class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
                d = {}
        for i in range(len(nums)):
            d[nums[i]] = i
                for i in range(len(nums)):
            if (d.get(target - nums[i], -1)) != -1 and i != d[target - nums[i]] :
                    return [i,d[target - nums[i]]]
                                    