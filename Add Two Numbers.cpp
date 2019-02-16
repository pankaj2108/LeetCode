Example:

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *res=NULL,*head=NULL;
        int carry=0;
        while(l1!=NULL && l2!=NULL){
            
            int sum=l1->val+l2->val+carry;
            carry=0;
            if(sum>=10) {
                sum%=10;
                carry=1;
            }
            if(head==NULL){
                res=new ListNode(sum);
                head=res;
            }
            else{
                res->next=new ListNode(sum);
                res=res->next;
            }
                
                l1=l1->next;
                l2=l2->next;
            
        }
        while(l1!=NULL){
            
            int sum=l1->val+carry;
            carry=0;
            if(sum>=10) {
                sum%=10;
                carry=1;
            }
            res->next=new ListNode(sum);
            res=res->next;
            l1=l1->next; 
        }
        while(l2!=NULL){
            
            int sum=l2->val+carry;
            carry=0;
            if(sum>=10) {
                sum%=10;
                carry=1;
            }
            res->next=new ListNode(sum);
            res=res->next;
            l2=l2->next;
        }
        if(carry==1){
            res->next=new ListNode(carry);
            res=res->next;
        }
        return head;
    }
