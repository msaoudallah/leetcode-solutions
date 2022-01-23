class Solution:
    def search(self, nums: List[int], target: int) -> int:
        # pivot = self.get_start(nums).
        pivot = nums.index(min(nums))
        print(pivot)
        larr = nums[:pivot]
        rarr = nums[pivot+1:]
        rind = self.bs(rarr,target)
        lind = self.bs(larr,target)
                if target == nums[pivot]:
            return pivot
                elif  rind != -1:
            return len(larr)+1+rind
                elif lind != -1:
            return lind
                return -1
                            def bs(self,arr,target):
        l=0
        r = len(arr)-1
        while (l<=r):
            m = (l+r)//2
            if target == arr[m]:
                return m
            elif target > arr[m]:
                l = m+1
            elif target < arr[m]:
                r = m-1
                return -1
            def get_start(self,arr):
        l = 0
        r = len(arr)-1
        while (l <= r):
            m = (l+r)//2
            if arr[m-1] > arr[m] < arr[m+1]:
                return m
            elif arr[m] < arr[l]:
                r = m-1
            elif arr[m] > arr[l]:
                l = m+1
                 return 0