//https://www.interviewbit.com/problems/symmetric-binary-tree/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 bool istrue(TreeNode* r1,TreeNode* r2){
     if(!r1 && !r2)return true;
     else if(r1!=NULL^r2!=NULL)return false;
     
     if(r1->val!=r2->val)return false;
     return istrue(r1->left,r2->right) && istrue(r1->right,r2->left);
 }
int Solution::isSymmetric(TreeNode* A) {
    if(istrue(A->left,A->right))return 1;
    return 0;
}
