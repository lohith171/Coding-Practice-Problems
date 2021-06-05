//https://www.interviewbit.com/problems/cousins-in-binary-tree/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A, int B) {
    if(!A)return {};
    queue<pair<TreeNode*,int>>q;
    map<int,vector<pair<TreeNode*,int>>>m;
    q.push({A,0});
    int level;
    TreeNode* r;
    while(!q.empty()){
        pair<TreeNode*,int>temp=q.front();
        q.pop();
        TreeNode* n=temp.first;
        int l=temp.second;
        if(n->left){
            m[l+1].push_back({n,n->left->val});
            if(n->left->val==B){
                level=l+1;
                r=n;
            }
            q.push({n->left,l+1});
        }
        if(n->right){
             m[l+1].push_back({n,n->right->val});
            if(n->right->val==B){
                level=l+1;
                r=n;
            }
            q.push({n->right,l+1});
        }
    }
    vector<int>res;
    vector<pair<TreeNode*,int>>v=m[level];
    for(auto x:v){
        if(x.first!=r){
            res.push_back(x.second);
        }
    }
    return res;
}
