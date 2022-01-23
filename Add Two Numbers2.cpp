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
    ListNode* addNode(int carry,ListNode* head){
                ListNode * tail = new ListNode(carry);
                ListNode * rem = head;
                ListNode * res = rem;
                while(rem->next){
                    rem = rem->next;
                }
                rem->next = tail;
                return res;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* head = l1;
        while(l1 && l2){
            int sum = l1->val+l2->val+carry;
            if(sum >= 10){
                l1->val = sum%10;
                carry  = sum / 10;
            }else {
                l1->val = sum;
                carry = 0;
            }
            l1 = l1->next;
            l2 = l2->next;
                    }
                        if(!l1 && !l2){
            if (!carry){
                return head;
            }
              else{
                return addNode(carry,head);
            }
        }
                else if (!l2){
            while (l1){
            int sum = l1->val+carry;
            if(sum >= 10){
                l1->val = sum%10;
                carry  = sum / 10;
            }else {
                l1->val = sum;
                carry = 0;
            }
                l1 = l1->next;
            }
            if (carry) {
                head = addNode(carry,head);
            }
            return head; // to be changed
        }else if (!l1){
                                  ListNode * l2start = l2;
            while (l2){
            int sum = l2->val+carry;
            if(sum >= 10){
                l2->val = sum%10;
                carry  = sum / 10;
            }else {
                l2->val = sum;
                carry = 0;
            }
                l2 = l2->next;
            }
            //l1->next = l2;
                ListNode * rem = head;
                ListNode * res = rem;
                while(rem->next){
                    //cout<<1;
                    rem = rem->next;
                }
            rem->next = l2start;
                if (carry){
                   head = addNode(carry,head);
                }
                            return head; // to be changed
        }
            }
};