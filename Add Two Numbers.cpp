/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode * walker = new ListNode(carry);
        ListNode * l3 = walker;
        while(l1|| l2 || carry){
            int a = l1 ? l1->val : 0;
            int b = l2 ? l2->val : 0;
            int s = a+b+carry;
            ListNode * nn = new ListNode(s%10);
            walker->next = nn;
            walker = walker->next;
                        carry = s/10;
            l1 = l1 ? l1->next:0;
            l2 = l2 ? l2->next:0;
        }
        return l3->next;
    }
};