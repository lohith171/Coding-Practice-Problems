//https://www.interviewbit.com/old/problems/valid-binary-search-tree/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int isBST(TreeNode* r,int max,int min){
     if(!r)return 1;
     if(r->val<=min || r->val>=max)return 0;
     return isBST(r->left,r->val,min) && isBST(r->right,max,r->val);
 }
int Solution::isValidBST(TreeNode* A) {
    return isBST(A,INT_MAX,INT_MIN);
}
