//https://www.interviewbit.com/problems/sorted-array-to-balanced-bst/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 TreeNode* solve(int low,int high,const vector<int> &A){
     int mid=(low+high)/2;
     if(low>high)return NULL;
     TreeNode* r=new TreeNode(A[mid]);
     r->left=solve(low,mid-1,A);
     r->right=solve(mid+1,high,A);
     return r;
 }
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    if(A.size()==0)return NULL;
    return solve(0,A.size()-1,A);
}
