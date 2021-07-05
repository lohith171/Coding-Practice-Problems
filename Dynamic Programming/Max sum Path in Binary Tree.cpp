//https://www.interviewbit.com/old/problems/max-sum-path-in-binary-tree/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int solve(TreeNode* r,int& ma){
     if(!r)return 0;
     int x=solve(r->left,ma);
     int y=solve(r->right,ma);
     
     int temp=r->val+max(x,max(y,0));
     int ans=max(temp,r->val+x+y);
     ma=max(ma,ans);
     return temp;
 }
int Solution::maxPathSum(TreeNode* A) {
    int ma=INT_MIN;
    solve(A,ma);
    return ma;
}
