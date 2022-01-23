class Solution:
    def targetIndices(self, nums: List[int], target: int) -> List[int]:
        l = 0
        r = len(nums) -1
        nums.sort()
        # print(nums)
        start,end=-1,-1
        # first 
        while (l <=r):
            m = (l+r)//2
                        if (target== nums[m]):
                start=m
                r = m-1
                            if target > nums[m]:
                l = m+1
                        elif target < nums[m]:
                r = m-1
                # last
        l,r=0,len(nums)-1
        while (l <=r):
            m = (l+r)//2
                        if (target== nums[m]):
                end=m
                l = m+1
                            if target > nums[m]:
                l = m+1
                        elif target < nums[m]:
                r = m-1
                        # print(start,end)
        if start==end==-1:
            return []
        else:
            res = list(range(start,end+1))
            return res
                                