# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def deepestLeavesSum(self, root: Optional[TreeNode]) -> int:
        maxlevel= -1
        tsum=0        
        def dfs(root,level):
            nonlocal maxlevel,tsum
            if root == None:
                return
                        if level > maxlevel:
                maxlevel = level
                tsum = root.val
            elif level == maxlevel:
                tsum+= root.val
            # print(maxlevel,tsum)
            dfs(root.left,level+1)
            dfs(root.right,level+1)
        dfs(root,0)
        return tsum
                                