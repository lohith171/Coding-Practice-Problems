/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
  TreeNode* solve(ListNode* low,ListNode* high){
        if(low==high)return NULL;
        if(low->next==NULL)return new TreeNode(low->val);
        
        ListNode *mid=low,*fast=low;
        while(fast->next!=high){
            mid=mid->next;
            fast=fast->next;
            if(fast->next!=high){
                fast=fast->next;
            }
        }
        
        TreeNode* r=new TreeNode(mid->val);
        r->left=solve(low,mid);
        r->right=solve(mid->next,high);
        return r;
    }
TreeNode* Solution::sortedListToBST(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    if(!A)return NULL;
    
    return solve(A,NULL);
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
