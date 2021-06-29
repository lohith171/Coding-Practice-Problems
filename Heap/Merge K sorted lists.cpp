//https://www.interviewbit.com/old/problems/merge-k-sorted-lists/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<A.size();i++){
        while(A[i]){
            pq.push(A[i]->val);
            A[i]=A[i]->next;
        }
    }
    ListNode* head=new ListNode(pq.top());
    pq.pop();
    ListNode* r=head;
    while(!pq.empty()){
        r->next=new ListNode(pq.top());
        pq.pop();
        r=r->next;
    }
    return head;
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
