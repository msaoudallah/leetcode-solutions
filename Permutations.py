class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        res = []
        self.solve(nums,[],res)
                return res
                            def solve(self,nums,path,res):
        if len(nums)==0:
            res.append(path)
                for i in range(len(nums)):
            self.solve(nums[:i]+nums[i+1:], path+[nums[i]], res)
        