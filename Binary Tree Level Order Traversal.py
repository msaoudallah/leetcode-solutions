# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
                res=[]
        if root == None:
            return res
                        q1 = []
        q1.append(root)
                while( len(q1) >0):
            currentlevel=[]
            for i in range(len(q1)):                
                node = q1.pop(0)
                currentlevel.append(node.val)
                if (node.left):
                    q1.append(node.left)
                if (node.right):
                    q1.append(node.right)
                        res.append(currentlevel)
        return res     
                                                                                