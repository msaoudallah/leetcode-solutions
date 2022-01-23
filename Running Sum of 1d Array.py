class Solution(object):
    def runningSum(self, nums):
        sumSoFar = 0
        res = []
        for i in nums :
            res.append(i+sumSoFar)
            sumSoFar += i
                    return res
        """
        :type nums: List[int]
        :rtype: List[int]
        """