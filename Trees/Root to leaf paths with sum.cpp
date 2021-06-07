//https://www.interviewbit.com/problems/root-to-leaf-paths-with-sum/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 void solve(TreeNode* r,int sum,vector<int>v,int B,vector<vector<int>>& res){
     if(!r)return;
     sum+=r->val;
     v.push_back(r->val);
     if(!r->left && !r->right){
         if(sum==B){
             res.push_back(v);
         }
     }
     solve(r->left,sum,v,B,res);
     solve(r->right,sum,v,B,res);
 }
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<int>v;
    vector<vector<int>>res;
    int sum;
    solve(A,0,v,B,res);
    return res;
}
