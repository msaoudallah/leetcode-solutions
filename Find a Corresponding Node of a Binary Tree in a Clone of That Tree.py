# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution:
    def getTargetCopy(self, original: TreeNode, cloned: TreeNode, target: TreeNode) -> TreeNode:
                    if original == None:
                return 
            elif original == target:
                print(original.val, cloned.val)
                return cloned
                        leftnode  = self.getTargetCopy(original.left,cloned.left,target)
            rightnode = self.getTargetCopy(original.right,cloned.right,target)
                        return leftnode or rightnode
        