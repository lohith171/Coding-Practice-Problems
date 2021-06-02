//https://www.interviewbit.com/problems/swap-list-nodes-in-pairs/

ListNode* Solution::swapPairs(ListNode* A) {
    ListNode* p=A;
    while(p && p->next){
        int temp=p->val;
        p->val=p->next->val;
        p->next->val=temp;
        p=p->next->next;
    }
    return A;
}
