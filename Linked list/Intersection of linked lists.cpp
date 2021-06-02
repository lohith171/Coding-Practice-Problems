//interviewbit.com/problems/intersection-of-linked-lists/

ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    stack<ListNode*>s1,s2;
    ListNode *res=NULL,*p=A,*q=B;
    while(p){
        s1.push(p);
        p=p->next;
    }
    while(q){
        s2.push(q);
        q=q->next;
    }
    while(!s1.empty() && !s2.empty() && s1.top()==s2.top()){
        res=s1.top();
        s1.pop();
        s2.pop();
    }
    return res;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
