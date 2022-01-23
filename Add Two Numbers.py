# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
            carry=0
                       root_l1 = l1
            l1_prev = ListNode()
            l2_prev = ListNode()
            l1_prev.next = l1
            l2_prev.next = l2
                        while(l1 and l2):
                d1 = l1.val
                d2 = l2.val
                s = carry+d1+d2
                carry = s//10
                                l1.val = (s)%10
                                l1_prev=l1
                l2_prev=l2
                                l1 = l1.next
                l2 = l2.next
                                        if l1 and not l2:
                while (l1):
                                        d1 = l1.val
                    s = carry+d1
                    carry = s//10
                    l1.val = (s)%10
                    l1_prev=l1
                    l1 = l1.next
                                                                    elif l2 and not l1:
                l1_prev.next = l2
                while (l2):
                    d2 = l2.val
                    s = carry+d2
                    carry = s//10
                    l2.val = (s)%10
                                        l1_prev=l2
                    l2 = l2.next
                                             if carry >0 :
                                l1 = l1_prev
                l1.next = ListNode()
                l1.next.val = carry
                        return root_l1
                                