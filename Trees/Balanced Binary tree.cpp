//https://www.interviewbit.com/problems/balanced-binary-tree/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int height(TreeNode* r){
     if(!r)return 0;
    else if(!r->left && !r->right)return 1;
    else return max(1+height(r->left),1+height(r->right));
 }
int Solution::isBalanced(TreeNode* A) {
    if(!A)return 1;
    if(abs(height(A->left)-height(A->right))>1)return 0;
    return isBalanced(A->left) && isBalanced(A->right);
}
