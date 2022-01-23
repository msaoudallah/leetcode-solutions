# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head == None:
            return head
        l=[]
        while (head != None):
            l.append(head.val)
            head = head.next
                l = l[::-1]
        print(l)
        root= ListNode()
        ptr = root
        for i in range(len(l)):
            ptr.val = l[i]
            if i < len(l)-1:
                ptr.next = ListNode()
                ptr = ptr.next
                return root
                                    