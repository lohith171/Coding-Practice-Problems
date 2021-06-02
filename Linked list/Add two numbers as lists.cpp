 //https://www.interviewbit.com/problems/add-two-numbers-as-lists/

ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    int carry=0;
    ListNode* head=new ListNode(0);
    ListNode* p=head;
    int x,y;
    while(A || B){
        if(A){
            x=A->val;
            A=A->next;
        }else{
            x=0;
        }
        if(B){
            y=B->val;
            B=B->next;
        }else{
            y=0;
        }
        int value=(x+y+carry)%10;
        carry=(x+y+carry)/10;
        p->next=new ListNode(value);
        p=p->next;
    }
    if(carry!=0){
        p->next=new ListNode(carry);
    }
    return head->next;
}
