class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
                if sum(nums) < target:
            return 0
                end = 0
        subsum = 0
        res = 1000001
        arr = []
        while end < len(nums):
            while end < len(nums) and subsum < target:
                subsum += nums[end]
                arr.append(nums[end])
                end += 1
            if subsum >= target:
                res = min(res, len(arr))
            subsum -= arr[0]
            arr = arr[1:]
                while subsum > target:
            subsum -= arr[0]
            arr = arr[1:]
                    if subsum >= target:
                res = min(res, len(arr))
        if subsum >= target:
            res = min(res, len(arr))
        return res
        