class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        l,r = 0,len(arr)-1
                while (r-l) >=2:
            m = (l+r)//2
            if arr[m-1]<arr[m]>arr[m+1]:
                return m
            elif arr[m-1]<arr[m]<arr[m+1]:
                l=m
            elif arr[m-1]>arr[m]>arr[m+1]:
                r=m
                return m