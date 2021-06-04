//https://www.interviewbit.com/problems/preorder-traversal/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    stack<TreeNode*>st;
    vector<int>res;
    TreeNode* r=A;
    while(r!=NULL || !st.empty()){
        while(r!=NULL){
            res.push_back(r->val);
            st.push(r);
            r=r->left;
        }
        r=st.top();
        st.pop();
        r=r->right;
    }
    return res;
}
