/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int lev=-1;
 TreeNode* n=NULL;
 void Solve(TreeNode* r,int k,int l){
     if(!r)return;
     if(r->left){
         if(r->left->val==k){
             n=r;
             lev=l;
             return;
         }
     }
     if(r->right){
         if(r->right->val==k){
             n=r;
             lev=l;
             return;
         }
     }
     Solve(r->left,k,l+1);
     Solve(r->right,k,l+1);
 }
vector<int> Solution::solve(TreeNode* A, int B) {
    Solve(A,B,0);
    if(lev==-1 || n==NULL)return {};
    queue<pair<TreeNode*,int>>q;
    vector<int>res;
    q.push({A,0});
    while(!q.empty()){
        pair<TreeNode*,int>temp=q.front();
        q.pop();
        TreeNode* node=temp.first;
        int level=temp.second;
        if(level==lev){
            if(node!=n){
                if(node->left){
                    res.push_back(node->left->val);
                }
                if(node->right){
                    res.push_back(node->right->val);
                }
            }
        }
        if(node->left){
            q.push({node->left,level+1});
        }
        if(node->right){
            q.push({node->right,level+1});
        }
        
    }
    return res;
    
}
