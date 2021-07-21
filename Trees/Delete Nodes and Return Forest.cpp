//https://leetcode.com/problems/delete-nodes-and-return-forest/

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
    unordered_set<TreeNode*>s;
    bool flag;
    TreeNode* solve(TreeNode* r,int val){
        if(!r)return NULL;
        
        r->left=solve(r->left,val);
        r->right=solve(r->right,val);
       
        if(r->val==val){
             if(r->left){
                s.insert(r->left);
                r->left=NULL;
            }
            if(r->right){
                s.insert(r->right);
                r->right=NULL;
            }
            if(s.find(r)!=s.end())s.erase(r);
            flag=1;
            return NULL;
        }else return r;
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*>res;
        if(!root)return {};
        s.insert(root);
        for(int i=0;i<to_delete.size();i++){
            flag=0;
            for(auto x:s){
               solve(x,to_delete[i]);
                if(flag)break;
            }
        }
        for(auto x:s)res.push_back(x);
        return res;
    }
};
