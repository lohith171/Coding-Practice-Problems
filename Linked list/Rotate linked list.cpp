//https://www.interviewbit.com/problems/rotate-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    int n=0;
    ListNode *p=A,*r=NULL;
    while(p){
        n++;
        p=p->next;
    }
    if(n==1)return A;
    int k=B%n;
    if(k==0)return A;
    p=A;
    for(int i=0;i<n-k;i++){
        r=p;
        p=p->next;
    }
    r->next=NULL;
    r=p;
    while(r->next){
        r=r->next;
    }
    r->next=A;
    A=p;
    return A;
    
}
