class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0 ;
        ListNode* curr= new ListNode(0);
        ListNode* toreturn = curr ;
        int value = 0;
        while(l1 && l2){
            value=l1->val + l2->val + carry;
            curr->val = value%10 ;
            carry = value/10 ;
            l1 = l1->next ;
            l2 = l2->next ;
            if(l1 || l2) {                   
                curr->next = new ListNode(0);
                curr = curr->next;
            }
            
        }
        while(l1){
            value = l1->val + carry ;
            curr->val = value%10;
            carry= value/10 ;
            l1 = l1->next ;
            if(l1){
                curr->next = new ListNode(0);
                curr = curr->next;                
            }
        }
        while(l2){
            value = l2->val + carry ;
            curr->val = value%10;
            carry= value/10 ;
            l2 = l2->next ;
            if(l2){
                curr->next = new ListNode(0);
                curr = curr->next;                
            }            
        }
        if(carry!=0) {
            curr->next=new ListNode(carry);
            }
        return toreturn ;
    }
};
