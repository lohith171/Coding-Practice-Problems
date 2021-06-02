//https://www.interviewbit.com/problems/reverse-link-list-ii/

ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    int c=0;
    ListNode *p=A,*s=NULL,*q=NULL,*r=NULL,*t=NULL;
    while(p){
        c++;
        if(c==B-1){
            s=p;
        }else if(c==C+1){
            t=p;
            q=p;
        }
        p=p->next;
    }
    if(B==1){
        p=A;
    }else{
        p=s->next;
    }
    while(p!=t){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    if(B==1){
        A=q;
    }else{
        s->next=q;
    }
   return A;
    
}
