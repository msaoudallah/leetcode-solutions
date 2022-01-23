# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def inorderTraversal(self, root):
        res = []
        stack = []
                while root or  stack:
                    while root : 
                print root.val
                stack.append(root)
                root = root.left
                                            cur = stack.pop()
            res.append(cur.val)
            root = cur.right
                return res
                                                        """
        :type root: TreeNode
        :rtype: List[int]
        """
        