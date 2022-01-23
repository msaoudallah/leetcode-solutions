# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def isValidBST(self, root):
        tree = []
        self.inOrder(root,tree)
                print tree
        valid = True
        for i in range(0,len(tree)-1) :
            if tree[i+1] > tree[i]:
                valid = True
            else:
                valid = False
                break
                return valid
       def inOrder(self,root,res):
               if root is None : 
            return
        self.inOrder(root.left,res)
        res.append(root.val)
        self.inOrder(root.right,res)
                                                    """
        :type root: TreeNode
        :rtype: bool
        """
        