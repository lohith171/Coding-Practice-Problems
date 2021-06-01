//https://www.interviewbit.com/problems/palindrome-list/

int Solution::lPalin(ListNode* A) {
    ListNode *p=A,*q=NULL,*r=NULL;
    int n=0;
    while(p){
        p=p->next;
        n++;
    }
    if(n==1)return 1;
    p=A;
    for(int i=0;i<n/2;i++){
        p=p->next;
    }
    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    p=A;
    while(p!=NULL && q!=NULL){
        if(p->val!=q->val)return 0;
        p=p->next;
        q=q->next;
    }
    return 1;
}
