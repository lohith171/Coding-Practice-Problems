//https://www.interviewbit.com/problems/reverse-alternate-k-nodes/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A, int B) {
    ListNode *s=A,*p=NULL,*q=NULL,*r=NULL,*t=NULL;
    int c=0;
    bool flag=false;
    while(s!=NULL){
        if(c%2!=0){
            for(int i=0;i<B;i++){
                t=t->next;
                s=s->next;
            }
        }else{
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
            t=A;
            flag=true;
            for(int i=0;i<B-1;i++){
                t=t->next;
            }
        }else{
            t->next=q;
            for(int i=0;i<B;i++){
                t=t->next;
            }
        }
            
        }
        c++;
    }
    return A;
    
}
