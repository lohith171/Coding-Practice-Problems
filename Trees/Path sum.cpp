//https://www.interviewbit.com/problems/path-sum/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 bool solve(TreeNode* r,int sum,int B){
     if(!r)return false;
     sum+=r->val;
     if(!r->left && !r->right){
         if(sum==B)return true;
     }
     return solve(r->left,sum,B) || solve(r->right,sum,B);
     
 }
int Solution::hasPathSum(TreeNode* A, int B) {
    int sum;
    if(solve(A,0,B))return 1;
    return 0;
}
