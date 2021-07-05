//https://leetcode.com/problems/diameter-of-binary-tree/

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
    int solve(TreeNode* r,int& res){
        if(!r)return 0;
        int x=solve(r->left,res);
        int y=solve(r->right,res);
        
        int temp=1+max(x,y);
        int ans=max(temp,1+x+y);
        res=max(res,ans);
        return temp;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int res=0;
        solve(root,res);
        return res-1;
    }
};
