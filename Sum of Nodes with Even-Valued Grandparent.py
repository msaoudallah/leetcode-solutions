# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumEvenGrandparent(self, root: TreeNode) -> int:
                tsum=0
                def dfs(root):
            nonlocal tsum
            if root == None:
                return 0
                        if root.val %2 == 0:
                if root.left:
                    if root.left.left:
                        tsum+=root.left.left.val
                    if root.left.right:
                        tsum+=root.left.right.val
                if root.right:
                    if root.right.left:
                        tsum+=root.right.left.val
                    if root.right.right:
                        tsum+=root.right.right.val
                                                return dfs(root.left)+dfs(root.right)
        dfs(root)
        return tsum