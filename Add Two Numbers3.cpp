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
                ListNode * tail = new ListNode(carry);
                                 //tail->val = carry;
                //tail->next = NULL;
                ListNode * rem = head;
                ListNode * res = rem;
                cout<<tail->val;
                while(rem->next){
                    //cout<<1;
                    rem = rem->next;
                }
                rem->next = tail;
                //cout<< rem->next->val;
                return res;
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
                ListNode * tail = new ListNode(carry);
                                 //tail->val = carry;
                //tail->next = NULL;
                ListNode * rem = head;
                ListNode * res = rem;
                cout<<tail->val;
                while(rem->next){
                    //cout<<1;
                    rem = rem->next;
                }
                rem->next = tail;
                //cout<< rem->next->val;
                return res;
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
                    ListNode * tail = new ListNode(carry);
                                 //tail->val = carry;
                //tail->next = NULL;
                ListNode * rem = head;
                ListNode * res = rem;
                cout<<tail->val;
                while(rem->next){
                    //cout<<1;
                    rem = rem->next;
                }
                rem->next = tail;
                //cout<< rem->next->val;
                return res;
                }
                            return head; // to be changed
        }
            }
};