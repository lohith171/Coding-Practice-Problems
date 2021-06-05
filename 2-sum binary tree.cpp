//https://www.interviewbit.com/problems/2sum-binary-tree/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 bool solve(TreeNode* r,unordered_map<int,int>& m,int k){
     if(!r)return false;
     if(m.find(k-r->val)!=m.end())return true;
     else{
         m.insert({r->val,1});
     }
     return solve(r->left,m,k) || solve(r->right,m,k);
 }
int Solution::t2Sum(TreeNode* A, int B) {
    unordered_map<int,int>m;
    if(solve(A,m,B))return 1;
    return 0;
}
