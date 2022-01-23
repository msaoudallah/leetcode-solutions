# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def getDecimalValue(self, head: ListNode) -> int:
        length = 0
        root= head
        while(head.next):
            length +=1
            head= head.next
                                        res=0
        while(root):
            res+= 2**length*root.val
            length -=1
            root= root.next
                return res