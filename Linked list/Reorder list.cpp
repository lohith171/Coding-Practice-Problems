//https://www.interviewbit.com/problems/reorder-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* A) {
    ListNode *p=A,*q=NULL,*r=NULL;
    int n=0;
    while(p){
        n++;
        p=p->next;
    }
    if(n==1 || n==2)return A;
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
   ListNode* t=p->next;
   p->next=q;
   r=q;
   q=q->next;
   p=t;
   t=t->next;
   while(t!=NULL){
       p->next=q;
       r->next=p;
       r=q;
       q=q->next;
       p=t;
       t=t->next;
   }
   return A;
}
