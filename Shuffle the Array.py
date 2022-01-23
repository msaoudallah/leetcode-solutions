class Solution(object):
    def shuffle(self, nums, n):
        res=[]
        for i in range (0,n):
            res.append(nums[i])
            res.append(nums[n+i])
                return res
        """
        :type nums: List[int]
        :type n: int
        :rtype: List[int]
        """
        