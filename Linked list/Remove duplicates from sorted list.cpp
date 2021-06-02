//https://www.interviewbit.com/problems/remove-duplicates-from-sorted-list/

ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* p=A;
    while(p && p->next){
        if(p->val==p->next->val){
            p->next=p->next->next;
        }else{
            p=p->next;
        }
    }
    return A;
}
