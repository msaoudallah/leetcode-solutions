# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
                if not l1 and not l2 :
            return None
                l3 = ListNode()
        l3_root = l3
        while (l1 and l2):
            if l1.val < l2.val:
                l3.val = l1.val
                l1 = l1.next
            elif l1.val >= l2.val:
                l3.val = l2.val
                l2 = l2.next 
                    l3.next = ListNode()           
            l3 = l3.next
        if l1:
            l3.val = l1.val
            l3.next = l1.next
        elif l2:
            l3.val = l2.val
            l3.next = l2.next
                return l3_root