//https://www.interviewbit.com/problems/right-view-of-binary-tree/

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
    q.push({A,0});
    map<int,vector<int>>m;
    while(!q.empty()){
        pair<TreeNode*,int>temp=q.front();
        q.pop();
        TreeNode* n=temp.first;
        int l=temp.second;
        m[l].push_back(n->val);
        if(n->left){
            q.push({n->left,l+1});
        }
        if(n->right){
            q.push({n->right,l+1});
        }
    }
    vector<int>res;
    for(auto x:m){
        int k=x.second.size();
        res.push_back(x.second[k-1]);
    }
    return res;
}
