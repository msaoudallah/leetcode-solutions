"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""
class Solution:
    def maxDepth(self, root: 'Node') -> int:
        if root == None:
            return 0
        maxlength = 1
        for i in range(len(root.children)):
            nodelength = 1+self.maxDepth(root.children[i])
            maxlength = max(maxlength,nodelength)
                return maxlength            