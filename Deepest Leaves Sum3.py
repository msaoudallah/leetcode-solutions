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
            level = []
            for i in range(len(q)):
                cur = q.pop(0)
                level.append(cur.val)                
                if cur.left:
                    q.append(cur.left)
                if cur.right:
                    q.append(cur.right)
            # print(level)
        return sum(level)
                        