//https://www.interviewbit.com/problems/least-common-ancestor/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 void solve(TreeNode* r,int k1,int k2,vector<int>v,vector<int>& res1,vector<int>& res2){
     if(!r)return;
     v.push_back(r->val);
     if(r->val==k1){
         res1=v;
     } 
     if(r->val==k2){
         res2=v;
     }
     solve(r->left,k1,k2,v,res1,res2);
     solve(r->right,k1,k2,v,res1,res2);
 }
int Solution::lca(TreeNode* A, int B, int C) {
    vector<int>v,res1,res2;
    solve(A,B,C,v,res1,res2);
    if(res1.size()==0 || res2.size()==0)return -1;
    int i=0,res=-1;
    while(i<res1.size() && i<res2.size() && res1[i]==res2[i]){
        res=res1[i];
        i++;
    }
   return res; 
}
