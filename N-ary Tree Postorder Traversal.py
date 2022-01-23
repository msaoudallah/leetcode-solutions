"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""
class Solution:
    def postorder(self, root: 'Node') -> List[int]:
        if root == None:
            return root
        res = []
        q = []
        q.append(root)
                while len(q) >0:
            head = q.pop()
            res.append(head.val)
            for i in head.children:
                q.append(i)
            # print(res)
                            return(res[::-1])
                