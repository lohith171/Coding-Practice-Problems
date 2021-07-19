//https://leetcode.com/problems/lowest-common-ancestor-of-deepest-leaves/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* r){
        if(!r)return 0;
        int x=height(r->left);
        int y=height(r->right);
        return 1+max(x,y);
    }
    
    void deep(TreeNode* r,vector<int>& v){
        int maxl=height(r);
        queue<pair<TreeNode*,int>>q;
        q.push({r,1});
        while(!q.empty()){
            pair<TreeNode*,int>temp=q.front();
            q.pop();
            TreeNode* n=temp.first;
            int lev=temp.second;
            if(lev==maxl)v.push_back(n->val);
            if(n->left){
                q.push({n->left,lev+1});
            }
            if(n->right){
                q.push({n->right,1+lev});
            }
        }
    }
    TreeNode* lca(TreeNode* r,vector<int>& v){
        if(!r)return NULL;
        for(int i=0;i<v.size();i++){
            if(r->val==v[i])return r;
        }
        TreeNode* left=lca(r->left,v);
        TreeNode* right=lca(r->right,v);
        if(left && right)return r;
        else if(!left && !right)return NULL;
        else if(!left)return right;
        else return left;
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        if(!root)return NULL;
        vector<int>v;
        deep(root,v);
        return lca(root,v);
    }
};
