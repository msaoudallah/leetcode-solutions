# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def increasingBST(self, root: TreeNode) -> TreeNode:
        l=[]
        self.inorder(root,l)
        newroot = TreeNode()
        x = newroot
        for i in range(len(l)) :
                        if i < len(l)-1:
                right = TreeNode()
                newroot.val = l[i]
                newroot.right = right
                newroot = newroot.right
            else:
                newroot.val = l[i]
                newroot.right = None
                return x
    def inorder(self,root,l):
        if not root:
            return
        else:
            self.inorder(root.left,l)
            l.append(root.val)
            # print(l).
            self.inorder(root.right,l)