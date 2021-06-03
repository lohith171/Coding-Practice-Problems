//https://www.interviewbit.com/problems/k-reverse-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    int n=0;
    ListNode *s=A,*q=NULL,*r=NULL,*t=NULL,*p=NULL;
    while(s){
        n++;
        s=s->next;
    }
    s=A;
    int k=n/B;
    
    if(B==1)return A;
    int c=0;
    bool flag=false;
    while(s!=NULL){
        p=s;
        for(int i=0;i<B;i++){
            s=s->next;
        }
        q=s;
        while(p!=s){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        if(!flag){
            A=q;
            flag=true;
        }else{
           t->next=q; 
        }
        if(c==0){
            t=A;
            for(int i=0;i<B-1;i++){
            t=t->next;
        }
        }else{
            for(int i=0;i<B;i++){
            t=t->next;
        }
        }
        c++;
        
    }
    return A;
}
