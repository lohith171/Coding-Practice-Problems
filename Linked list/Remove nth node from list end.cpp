//https://www.interviewbit.com/problems/remove-nth-node-from-list-end/

ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    int n=0;
    ListNode* p=A;
    while(p){
        p=p->next;
        n++;
    }
    if(n==0)return A;
    p=A;
    ListNode* r=NULL;
    if(B>=n){
        A=A->next;
        return A;
    }
    for(int i=0;i<n-B;i++){
        r=p;
        p=p->next;
    }
    r->next=p->next;
    return A;
    
}
