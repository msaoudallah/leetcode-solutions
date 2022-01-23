# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def deepestLeavesSum(self, root: Optional[TreeNode]) -> int:
                q=[root]
                while (len(q) != 0):
            tsum=0
            for i in range(len(q)):
                cur = q.pop(0)
                tsum+=cur.val                
                if cur.left:
                    q.append(cur.left)
                if cur.right:
                    q.append(cur.right)
        return tsum
                        