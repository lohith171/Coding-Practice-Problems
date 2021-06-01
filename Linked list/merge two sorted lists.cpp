//https://www.interviewbit.com/problems/merge-two-sorted-lists/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* head=NULL;
        ListNode* last=NULL;
        if(A==NULL){
            return B;
        }
        if(B==NULL){
            return A;
        }
        if(A->val<B->val){
            head=A;
            last=A;
            A=A->next;
            last->next=NULL;
        }else{
            head=B;
            last=B;
            B=B->next;
            last->next=NULL;
        }
        while(A && B){
            if(A->val<B->val){
                last->next=A;
                last=A;
                A=A->next;
                last->next=NULL;
            }else{
                last->next=B;
                last=B;
                B=B->next;
                last->next=NULL;
            }
        }
        if(A){
            last->next=A;
        }else{
            last->next=B;
        }
        return head;
}
