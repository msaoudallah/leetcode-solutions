# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution:
    def distanceK(self, root: TreeNode, target: TreeNode, k: int) -> List[int]:
                ## idea form another solution from discussions
        def getparent(node,parent):
            if node == None:
                return
            node.parent = parent
            getparent(node.left,node)
            getparent(node.right,node)
        getparent(root,None)
                seen = set()
        ans =[]
                def dfs(root,k):
            if root == None or root in seen or k <0:
                return
                        seen.add(root)
            if k == 0:
                ans.append(root.val)
                return
                        dfs(root.parent,k-1)
            dfs(root.left,k-1)
            dfs(root.right,k-1)
        dfs(target,k)
        return ans
            