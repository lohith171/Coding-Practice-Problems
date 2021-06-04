//https://www.interviewbit.com/problems/list-cycle/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    ListNode *p=A,*q=A;
    do{
        p=p->next;
        q=q->next;
        if(q){
            q=q->next;
        }
    }while(q!=NULL && p!=q);
    if(q==NULL)return NULL;
    int n=0;
    do{
        n++;
        p=p->next;
    }while(p!=q);
    p=A;
    q=A;
    for(int i=0;i<n;i++){
        q=q->next;
    }
    while(p!=q){
        p=p->next;
        q=q->next;
    }
    return p;
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
