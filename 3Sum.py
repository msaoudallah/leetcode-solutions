class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        if len(nums) < 3 :
            return []
                # nums=sorted(nums)
        nums.sort()
        # print(nums)
        start = 0
        l = start+1
        r = len(nums)-1
        res=[]
        while (start <len(nums)-2):
                        if nums[start] > 0 :
                break
                        while(l<r):
                if nums[start]+ nums[l]+ nums[r]==0 :
                    if [nums[start],nums[l],nums[r]] not in res:
                        res.append([nums[start],nums[l],nums[r]])
                    l+=1
                    r-=1
                elif  nums[start]+nums[l]+nums[r] > 0:
                    r-=1
                elif  nums[start]+nums[l]+nums[r] < 0:
                    l+=1
            start+=1
            l = start+1
            r = len(nums)-1
        return res
            