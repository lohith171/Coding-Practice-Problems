//https://www.interviewbit.com/old/problems/level-order/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    if(!A)return {};
   vector<vector<int>>res;
   vector<int>temp;
   queue<TreeNode*>q;
   q.push(A);
   while(!q.empty()){
       int n=q.size();
       while(n--){
           TreeNode* t=q.front();
           q.pop();
           temp.push_back(t->val);
           if(t->left)q.push(t->left);
           if(t->right)q.push(t->right);
       }
       res.push_back(temp);
       temp.clear();
   }
    return res;
}
