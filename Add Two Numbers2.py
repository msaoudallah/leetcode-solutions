# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
                carry = 0
        l2H = l2
        l1H = l1
        l1old = l1
        l2old = l2
        while l1 and l2:
            temp = carry + l1.val+l2.val
            digVal = temp%10
            carry = temp // 10
            l2.val = digVal
            l1old = l1
            l2old = l2
            l1 = l1.next
            l2 = l2.next
                        if l1 : 
            l2 = l2old
            l1Rest = l1
            while l1:
                temp = carry + l1.val
                digVal = temp%10
                carry = temp // 10
                l1.val = digVal
                l1old = l1
                l1 = l1.next
            l2.next = l1Rest
        elif l2: 
            #l2 = l2old
            while l2:
                temp = carry + l2.val
                digVal = temp%10
                carry = temp // 10
                l2.val = digVal
                l2old = l2
                l2 = l2.next
                if carry:
            while l2:
                l2old = l2
                l2= l2.next
                            nextNode =  ListNode()
            nextNode.val = carry
            l2 = l2old
            l2.next = nextNode
                        return l2H
                                """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        