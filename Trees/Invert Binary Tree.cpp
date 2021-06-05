//https://www.interviewbit.com/problems/invert-the-binary-tree/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void solve(TreeNode* r){
     if(!r)return;
     TreeNode* temp=r->left;
     r->left=r->right;
     r->right=temp;
     solve(r->left);
     solve(r->right);
 }
TreeNode* Solution::invertTree(TreeNode* A) {
    solve(A);
    return A;
}
