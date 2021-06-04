//https://www.interviewbit.com/problems/inorder-traversal/

vector<int> Solution::inorderTraversal(TreeNode* A) {
    stack<TreeNode*>st;
    TreeNode* r=A;
    vector<int>res;
    while(r!=NULL || !st.empty()){
        while(r!=NULL){
            st.push(r);
            r=r->left;
        }
            r=st.top();
            st.pop();
            res.push_back(r->val);
            r=r->right;
        
    }
    return res;
}
