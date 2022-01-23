# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def constructMaximumBinaryTree(self, nums: List[int]) -> Optional[TreeNode]:
        if len(nums)==0:
            return None
                root = TreeNode()
        root.val = max(nums)
        ind = nums.index(root.val)
        larr = nums[:ind]
        rarr = nums[ind+1:]
                root.left = self.constructMaximumBinaryTree(larr)
        root.right = self.constructMaximumBinaryTree(rarr)
                return root
                