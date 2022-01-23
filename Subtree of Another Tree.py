# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
                if (root == None) :
            return False
                # print(root.val)
        return self.isSubtree(root.left,subRoot) or (root.val == subRoot.val and self.check(root,subRoot)) or self
            .isSubtree(root.right,subRoot)
            def check(self,root,subroot):
        # print(root.val, subroot.val)
        if root==None and subroot == None:
            return True
        elif (root and not subroot) or (subroot and not root):
            return False
                return root.val == subroot.val and self.check(root.left,subroot.left) and self.check(root.right,subroot
            .right)