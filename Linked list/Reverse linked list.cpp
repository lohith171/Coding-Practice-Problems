//https://www.interviewbit.com/problems/reverse-linked-list/

ListNode* Solution::reverseList(ListNode* A) {
    ListNode *r=NULL,*q=NULL;
    while(A){
        r=q;
        q=A;
        A=A->next;
        q->next=r;
    }
    return q;
}
