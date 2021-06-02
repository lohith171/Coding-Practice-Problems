//https://www.interviewbit.com/problems/even-reverse/

ListNode* Solution::solve(ListNode* A) {
    vector<int>v;
    ListNode* p=A;
    p=p->next;
    while(p){
        v.push_back(p->val);
        if(p->next) p=p->next->next;
        else p=p->next;
    }
    p=A;
    p=p->next;
    int i=v.size()-1;
    while(p){
        p->val=v[i];
        i--;
        if(p->next){
            p=p->next->next;
        }else p=p->next;
        
    }
    return A;
}
