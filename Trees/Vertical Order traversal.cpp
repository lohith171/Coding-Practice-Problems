//https://www.interviewbit.com/problems/vertical-order-traversal-of-binary-tree/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
    if(A==NULL)return {};
    queue<pair<TreeNode*,int>>q;
    map<int,vector<int>>m;
    q.push(make_pair(A,0));
    while(!q.empty()){
        pair<TreeNode*,int>temp=q.front();
        q.pop();
        TreeNode* n=temp.first;
        int k=temp.second;
        m[k].push_back(n->val);
        if(n->left){
            q.push(make_pair(n->left,k-1));
        }
        if(n->right){
            q.push(make_pair(n->right,k+1));
        }
    }
    int s=m.size(),i=0;
    vector<vector<int>>res(s);
    for(auto x:m){
        for(int j=0;j<x.second.size();j++){
            res[i].push_back(x.second[j]);
        }
        i++;
    }
    return res;
}
