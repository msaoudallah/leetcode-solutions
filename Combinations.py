class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        nums = list(range(1,n+1))
        res =[]
                self.solve(nums,[],k,res)
                return list(res)
        def solve(self,nums,path,k,res):
        if len(path) == k:
            # if sorted(path) not in res:
                res.append(path)
        elif len(path)> k or len(nums)==0 or len(nums)+len(path) < k:
                        return
                for i in range(len(nums)):
            # print(path,nums[i])
            if len(path) > k:
                break
                            self.solve(nums[i+1:], path+[nums[i]],k,res)
        # nums = nums[1:]
        