//https://www.interviewbit.com/problems/path-to-given-node/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 vector<int>res;
 void sol(TreeNode* r,vector<int>v,int k){
     if(!r)return;
     v.push_back(r->val);
     if(r->val==k){
         res=v;
     }
     sol(r->left,v,k);
     sol(r->right,v,k);
     
 }
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int>v;
    sol(A,v,B);
    return res;
}
