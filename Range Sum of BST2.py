# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
        def rangeSumBST(self, root: Optional[TreeNode], low: int, high: int) -> int:
        l=[]
        self.inorder(root,l,low,high)
        return(sum(l))
        def inorder(self,root,mem,low,high):
                if root == None:
            return
        self.inorder(root.left,mem,low,high)
        if root.val >=low and root.val <=high:
            mem.append(root.val)
        # print(mem)
        self.inorder(root.right,mem,low,high)
                                