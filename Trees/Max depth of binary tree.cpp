//https://www.interviewbit.com/problems/max-depth-of-binary-tree/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::maxDepth(TreeNode* A) {
    if(!A)return 0;
    else if(!A->left && !A->right)return 1;
    else return max(1+maxDepth(A->left),1+maxDepth(A->right));
}
