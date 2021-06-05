//https://www.interviewbit.com/problems/reverse-level-order/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A) {
    if(!A)return {};
    queue<pair<TreeNode*,int>>q;
    map<int,vector<int>>m;
    q.push({A,0});
    while(!q.empty()){
        pair<TreeNode*,int>temp=q.front();
        q.pop();
        TreeNode* n=temp.first;
        int l=temp.second;
        m[l].push_back(n->val);
        
        if(n->right){
            q.push({n->right,l+1});
        }
        if(n->left){
            q.push({n->left,l+1});
        }
    }
    vector<int>res;
    for(auto x:m){
        for(int i=0;i<x.second.size();i++){
            res.push_back(x.second[i]);
        }
    }
    reverse(res.begin(),res.end());
    return res;
}
